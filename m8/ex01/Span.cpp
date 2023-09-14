/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:47:17 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/14 13:37:52 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

Span::Span( void ) : _size(10) {
	std::cout << "Default constructor called (max = 10)" << std::endl;
}

Span::Span( unsigned int n ) : _size(n) {
	std::cout << "Standard constructor called" << std::endl;
}

Span::Span( const Span& rhs ) : _size(rhs._size), _vector(rhs._vector) {
	std::cout << "Copy constructor called" << std::endl;
}

Span::~Span( void ) {
	std::cout << "Destructor called" << std::endl;
}

void	Span::addNumber( int i ) {
	if (_vector.size() ==  _size)
		throw Span::vectorFullException();
	_vector.push_back(i);
}

void	Span::addManyNumber( int i ) {
	static_cast<void>(i);
}

unsigned int	Span::shortestSpan( void ) const {
	return (0);
}

unsigned int	Span::longestSpan( void ) const {
	return (0);
}

std::vector<int>	Span::getVector( void ) const {
	return (this->_vector);
}

int&	Span::operator[]( unsigned int i ) {
	if (i > _size)
		throw std::exception();
	return (this->_vector[i]);
}

unsigned int	Span::getSize( void ) const {
	return (this->_size);
}

const char* Span::vectorFullException::what( void ) const throw() {
	return ("\e[4;1;31mVector is full!\e[0m");
}
