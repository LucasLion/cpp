/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:03:42 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/05 18:56:34 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <ios>
#include <sstream>
#include <cstdlib>

ScalarConverter::ScalarConverter( void ) { }
ScalarConverter::ScalarConverter(ScalarConverter const & src) { static_cast<void>(src); }
ScalarConverter::~ScalarConverter( void ) {  }
ScalarConverter&	ScalarConverter::operator=( ScalarConverter const & rhs ) { static_cast<void>(rhs); return *this; }

bool	ScalarConverter::isChar( const std::string& str ) {

	if (str.length() == 1 && !isdigit(str[0]) && str[0] > 32 && str[0] < 126)
		return (true);
	return (false);
}

bool	ScalarConverter::isInt( const std::string& str ) {

	if (str.length() == 0)
		return (false);
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
	
	if (str == "nanf" || str == "-inff" || str == "inff")
		return (true);
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

	if (str == "nan" || str == "-inf" || str == "inf")
		return (true);
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

std::string	ScalarConverter::findType( const std::string& str ) {

	std::string type;

	if (isChar(str))
		type = "char";
	else if (isInt(str))
		type = "int";
	else if (isFloat(str))
		type = "float";
	else if (isDouble(str))
		type = "double";
	else type = "impossible";
	return (type);
}

void	ScalarConverter::convertFromChar( const std::string& str ) {
	
	std::istringstream iss(str);
	char c;

	iss >> c;
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
	iss.clear();
}
	
void	ScalarConverter::convertFromInt( const std::string& str ) {
	
	int i = atoi(str.c_str());

	if (i >= 0 && i <= 127 && isprint(i))
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else if (i >= 0 && i <= 127 && !isprint(i))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	ScalarConverter::convertFromFloat( const std::string& str ) {

	float i = atof(str.c_str());
	
	if ((str == "nanf" || str == "-inff" || str == "inff")) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
		return ;
	}
	else if (i >= 0 && i <= 127 && isprint(i))
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else if (i >= 0 && i <= 127 && !isprint(i) && i - static_cast<int>(i) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	if (i - static_cast<int>(i) == 0) {
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
	}
	else {
		std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
	}
}

void	ScalarConverter::convertFromDouble( const std::string& str ) {

	double i = atof(str.c_str());
	
	if ((str == "nan" || str == "-inf" || str == "inf")) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	else if (i < 32 && i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else if (isprint(i) && str.length() == 1)
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	if (i - static_cast<int>(i) != 0) {
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
	}
	else {
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	}
}

void	ScalarConverter::convert( const std::string& str ) {

	std::string result = ScalarConverter::findType(str);

	std::cout << "String to convert: " << G << str << RE << std::endl;
	if (result == "int") {
		std::cout << "Conversion from int to:" << std::endl;
		ScalarConverter::convertFromInt(str);
	}
	else if (result == "char") {
		std::cout << "Conversion from char to:" << std::endl;
		ScalarConverter::convertFromChar(str);
	}
	else if (result == "float") {
		std::cout << "Conversion from float to:" << std::endl;
		ScalarConverter::convertFromFloat(str);
	}
	else if (result == "double") {
		std::cout << "Conversion from double to:" << std::endl;
		ScalarConverter::convertFromDouble(str);
	}
	else
		 std::cout << R << "Conversion is absurd" << RE << std::endl;
	std::cout << std::endl;
}
