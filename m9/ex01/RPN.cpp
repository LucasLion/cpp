/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:06:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/21 13:06:49 by llion@student    ###   ########.fr       */
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
	if (this != &rhs) {
		_stack = rhs._stack;
	}
	return (*this);
}

static int	isIntOrOperator( const std::string& str ) {
	try {
		if (str[0] >= 48 && str[0] <= 57) {
			return (1);
		}
		else if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/') {
			return (2);
		}
	} catch (const std::exception& e) {
		return 0;
	}
	return (0);
}

int	RPN::add( void ) {
	
	int i = _stack.top();	
	_stack.pop();
	int j = _stack.top();
	_stack.pop();
	return (j + i);

}

int	RPN::sub( void ) {
	
	int i = _stack.top();	
	_stack.pop();
	int j = _stack.top();
	_stack.pop();
	return (j - i);

}

int	RPN::mul( void ) {
	
	int i = _stack.top();	
	_stack.pop();
	int j = _stack.top();
	_stack.pop();
	return (j * i);

}

int	RPN::div( void ) {
	
	int i = _stack.top();	
	_stack.pop();
	int j = _stack.top();
	_stack.pop();
	if (i == 0)
		throw std::exception();
	return (j / i);

}

void	RPN::calculate( char **argv ) {

	std::string	str = argv[1];
	std::istringstream	iss(str);
	std::string			token;
	int					res = 0;
	int					intCount = 0;
	int					opCount = 0;

	while (std::getline(iss, token, ' ')) {
		if (token.length() > 1 || !isIntOrOperator(token))
			throw std::exception();
		else {
			if (isIntOrOperator(token) == 1) {
				_stack.push(atoi(token.c_str()));
				intCount++;
			}
			else if (isIntOrOperator(token) == 2) {
				opCount++;
				if (intCount < opCount + 1)
					throw std::exception();
				switch (token[0]) {
					case '+':
						res = add();
						_stack.push(res);
						break; 
					case '-':
						res = sub();
						_stack.push(res);
						break; 
					case '*':
						res = mul();
						_stack.push(res);
						break; 
					case '/':
						res = div();
						_stack.push(res);
						break; 
				}
			}
		}
	}
	std::cout << "Result: " << res << std::endl;
}

