/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:06:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/20 16:37:15 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>

RPN::RPN( void ) { };

RPN::~RPN( void ) { };

RPN::RPN( const RPN& rhs ) {
	*this = rhs;
}

RPN&	RPN::operator=( const RPN& rhs ) {
	if (this != &rhs) { }
	return (*this);
}

static int	isIntOrOperator( const std::string& str ) {
	try {
		if (str[0] >= 48 && str[0] <= 57) {
			return (1);
		}
		else if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '\\') {
			return (2);
		}
	} catch (const std::exception& e) {
		return 0;
	}
	return (0);
}

void	RPN::calculate( char **argv ) {

	std::string	str = argv[1];
	std::istringstream			iss(str);
	std::stack<std::string>		stack;
	std::string					token;

	while (std::getline(iss, token, ' ')) {
		if (token.length() > 1 || !isIntOrOperator(token))
			throw std::exception();
		else {
			if (isIntOrOperator(token) == 1)
				stack.push(token);
			else if (isIntOrOperator(token) == 2)
				
		}
		stack.push(token);
	}

}

