/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:03:42 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/01 16:46:42 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>

ScalarConverter::ScalarConverter() { }
ScalarConverter::ScalarConverter(ScalarConverter const & src) { *this = src; }
ScalarConverter::~ScalarConverter() {  }
ScalarConverter&	ScalarConverter::operator=(ScalarConverter const & rhs) { (void)rhs; return *this; }

std::string	ScalarConverter::findType(const std::string& str ) {

	std::string type;
	if (str.find('f') != std::string::npos) {
		type = "float";
	}
	else if (str.find('.') != std::string::npos && str.find('f') == std::string::npos) {
		type = "double";
	}
	else if (str.length() == 1 && !isdigit(str[0])) {
		type = "char";
	}
	else if (str.length() == 1 && isdigit(str[0])) {
		type = "int";
	}
	else if (str.length() > 1 && (isdigit(str[0]) || str[0] == '-')) {
		for (long unsigned int i = 0; i < str.length(); i++) {
			if (!isdigit(str[i]) && str[i] != '-' && i != 0) {
				type = "impossible";
				return (type);
			}
		}
		type = "int";
	}
	else {
		type = "impossible";
	}
	return (type);
}

void	ScalarConverter::convert(const std::string& str) {
	std::istringstream iss(str);
	std::string result = this->findType(str);

    std::cout << "Input: " << std::left << std::setw(25) << str << " | ";
    std::cout << "Type: " << std::left << std::setw(5) << Y << result << RE << std::endl;
}
