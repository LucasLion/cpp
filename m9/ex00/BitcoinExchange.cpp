/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:41:31 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/19 16:17:57 by llion@student    ###   ########.fr       */
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

void	BitcoinExchange::fillInput( std::map< std::string, std::string >& data, char* argv[] ) {
	std::ifstream db(argv[1]);
	std::map< std::string, std::string >::iterator it;

	if (!db.is_open()) {
		throw std::exception();
	}
	std::string line;
	while (std::getline(db, line)) {
		std::string key;
		std::string value;
		std::string sep = " | ";
		size_t start = 0;
		size_t end;
		while ((end = line.find(sep, start)) != std::string::npos) {
			key =  line.substr(start, end - start);
			start = end + sep.length();
		}
		value = line.substr(start);
		data[key] = value;
	}
	for (it = data.begin(); it != data.end(); it++) {
		std::cout << "key: " << it->first << " | value: " << it->second << std::endl;
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
	if (atoi(year.c_str()) < 2009 && atoi(month.c_str()) < 1 && atoi(day.c_str()) < 2)
		return (0);
	if (atoi(year.c_str()) > 2022 && atoi(month.c_str()) > 3 && atoi(day.c_str()) > 29)
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

void	BitcoinExchange::dateParser( std::string date ) {
	struct tm tm;
	std::string s(date);
	if(strptime(s.c_str(), "%Y-%m-%d", &tm) && valiDate(date)) {
		std::cout << date << std::endl;
		std::cout << "date is valid" << std::endl;
	}
	else {
		std::cout << date << std::endl;
		std::cout << "date is invalid" << std::endl;
	}
}

std::map< std::string, std::string >	BitcoinExchange::getData( void ) {
	return (_map);
}

std::map< std::string, std::string >	BitcoinExchange::getInput( void ) {
	return (_input);
}

