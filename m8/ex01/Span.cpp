/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:47:17 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/18 13:21:32 by llion@student    ###   ########.fr       */
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

Span& Span::operator=( const Span& rhs ) {
	if (this != &rhs) { this->_size = rhs._size;	this->_vector = rhs._vector;
	}
	return (*this);
}

void	Span::addNumber( int i ) {
	if (_vector.size() ==  _size)
		throw vectorFullException();
	_vector.push_back(i);
}

void	Span::addNumbers( unsigned int i ) {
	std::srand(std::time(NULL));
	for (unsigned int j = 0; j < i; j++) {
		int random = std::rand() % 1000000;
		std::cout << "rand: " << random << std::endl;
		_vector.insert(_vector.end(), random);
	}
}

unsigned int	Span::shortestSpan( void ) const {
	if (_vector.size() < 2)
		throw notEnoughValuesException();
	unsigned int	shortestSpan = _vector[1] - _vector[0];
	for (unsigned int i = 0; i < _vector.size(); i++) {
		for (unsigned int j = i + 1; j < _vector.size(); j++) {
			int diff = _vector[j] - _vector[i];
			if (static_cast<unsigned int>(abs(diff)) < shortestSpan)
				shortestSpan = abs(diff);
		}
	}
	return (shortestSpan);
}

unsigned int	Span::longestSpan( void ) const {
	if (_vector.size() < 2)
		throw notEnoughValuesException();
	int min = _vector[0];
	int max = _vector[0];
	for (unsigned int i = 0; i < _vector.size(); i++) {
		if (_vector[i] < min)
			min = _vector[i];
		if (_vector[i] > max)
			max = _vector[i];
	}
	return (max - min);
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

const char* Span::vectorFullException::what ( void ) const throw() {
	return ("\e[4;1;31mVector is full!\e[0m");
}

const char* Span::notEnoughValuesException::what ( void ) const throw() {
	return ("\e[4;1;31mNot enough values!\e[0m");
}
