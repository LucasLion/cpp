/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:41:31 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/20 14:48:16 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {
	fillData(_map);
};

BitcoinExchange::~BitcoinExchange( void ) { };

void	BitcoinExchange::fillData( std::map< std::string, std::string >& data ) {
	std::ifstream db("data.csv");
	std::map< std::string, std::string >::iterator it;

	if (!db.is_open()) {
		throw std::exception();
	}
	std::string line;
	while (std::getline(db, line)) {
		std::string key;
		std::string value;
		std::istringstream iss(line);
		if (std::getline(iss, key, ',')) {
			std::getline(iss, value);
		}
		data[key] = value;
	}
	db.close();
}

static int valiDate( std::string date ) {

	std::istringstream	iss(date);
	std::string			year;
	std::string			month;
	std::string			day;
	
	std::getline(iss, year, '-');
	std::getline(iss, month, '-');
	std::getline(iss, day, '-');
	if (atoi(year.c_str()) < 2009)
		return (0);
	if ((atoi(month.c_str()) == 4 || atoi(month.c_str()) == 6 || atoi(month.c_str()) == 9 || atoi(month.c_str()) == 11) && atoi(day.c_str()) > 30)
		return (0);
	if (atoi(month.c_str()) == 2 && atoi(day.c_str()) > 28)
		return (0);
	if (month.length() != 2 || day.length() != 2)
		return (0);
	if (year == "date")
		return (0);
	return (1);
}

static int lineFormat( std::string line ) {
	if (line.length() < 14)
		return (0);
	if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
		return (0);
	return (1);
}

void	BitcoinExchange::convert( char* argv[] ) {
	std::ifstream db(argv[1]);

	if (!db.is_open()) {
		throw std::exception();
	}
	std::string line;
	while (std::getline(db, line)) {
		std::string date = line.substr(0, 10);
		if (!dateParser(date))
			std::cout << "Error: bad input => " << date << std::endl;
		if (dateParser(date) && lineFormat(line)) {
			float value = atof(line.substr(13).c_str());
			std::map<std::string, std::string>::iterator it = _map.upper_bound(date);
			it--;
			if (value < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else if (value > 1000)
				std::cout << "Error: too large number." << std::endl;
			else
			std::cout << date << " => " << value << " = " << (atof(it->second.c_str()) * value) <<std::endl;

		}
	}
	db.close();
}

int	BitcoinExchange::dateParser( std::string date ) {
	struct tm tm;
	std::string s(date);
	if(strptime(s.c_str(), "%Y-%m-%d", &tm) && valiDate(date))
		return (1);
	else
		return (0);
}

std::map< std::string, std::string >	BitcoinExchange::getData( void ) {
	return (_map);
}
