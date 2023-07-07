/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:28:48 by llion             #+#    #+#             */
/*   Updated: 2023/07/07 10:55:36 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->_fixNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

void	Fixed::operator=( Fixed& source ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixNumber = source.getRawBits();
}

Fixed::Fixed( Fixed& source ) {
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(source);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixNumber;
}

void	Fixed::setRawBits( int const raw ) { this->_fixNumber = raw; }
