/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:03:42 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/04 17:28:54 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cmath>
#include <sstream>
#include <cstdlib>

ScalarConverter::ScalarConverter() { }
ScalarConverter::ScalarConverter(ScalarConverter const & src) { *this = src; }
ScalarConverter::~ScalarConverter() {  }
ScalarConverter&	ScalarConverter::operator=(ScalarConverter const & rhs) { (void)rhs; return *this; }

bool	ScalarConverter::isChar( const std::string& str ) {
	if (str.length() == 1 && !isdigit(str[0]))
		return (true);
	return (false);
}

bool	ScalarConverter::isInt( const std::string& str ) {

	for (long unsigned int i = 0; i < str.length(); i++) {
		if (i == 0 && str[i] == '-')
			i++;
		else if (!isdigit(str[i]))
			return (false);
		}
	return (true);
}

bool	ScalarConverter::isFloat( const std::string& str ) {
	
	int count_point = 0;
	for (long unsigned int i = 0; i < str.length(); i++) {
		if (i == 0 && str[i] == '-')
			i++;
		if (str[i] == '.')
			count_point++;
		if (str[i] != '.' && !isdigit(str[i]) && str[i] != 'f')
			return (false);
		else if (i == str.length() - 1 && (str[i] != 'f'))
			return (false);
	}
	if (count_point != 1)
		return (false);
	return (true);
}

bool ScalarConverter::isDouble( const std::string& str ) {

	int count_point = 0;
	for (long unsigned int i = 0; i < str.length(); i++) {
		if (i == 0 && str[i] == '-')
			i++;
		if (str[i] == '.')
			count_point++;
		if (str[i] != '.' && !isdigit(str[i]))
			return (false);
	}
	if (count_point != 1)
		return (false);
	return (true);
}

std::string	ScalarConverter::findType(const std::string& str ) {

	std::string type;

	if (isChar(str))
		type = "char";
	else if (isInt(str))
		type = "int";
	else if (isFloat(str))
		type = "float";
	else if (isDouble(str))
		type = "double";
	else type = "other";
	if (type == "other" && str == -INFINITY)
		type = "impossible";
	return (type);
}

void	ScalarConverter::convert(const std::string& str) {

	std::istringstream iss(str);
	std::string result = this->findType(str);

    std::cout << "Input: " << std::left << std::setw(25) << str << " | ";
    std::cout << "Type: " << std::left << std::setw(5) << Y << result << RE << std::endl;
}
