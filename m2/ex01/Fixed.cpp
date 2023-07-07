/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:28:48 by llion             #+#    #+#             */
/*   Updated: 2023/07/07 16:08:31 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->_fixNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed&	Fixed::operator=( const Fixed& source ) {
	if (this != &source) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixNumber = source.getRawBits();
	}
	return *this;
}

Fixed::Fixed( const Fixed& source ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::Fixed( int const num ) {
	std::cout << "Int constructor called" << std::endl;
	//this->_fixNumber = num << Fixed::_fract; 
	this->_fixNumber = num;
}

Fixed::Fixed( float const num ) {
	std::cout << "Float constructor called" << std::endl;
	//this->_fixNumber = roundf(num * (1 << Fixed::_fract));
	this->_fixNumber = num;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	return this->_fixNumber;
}

std::ostream&		operator<<( std::ostream& COUT, const Fixed& f ) {
	COUT << f.toFloat();
	return (COUT);
}

void	Fixed::setRawBits( int const raw ) { this->_fixNumber = raw; }

float	Fixed::toFloat( void ) const { 
	//return ((float)this->_fixNumber / (float)(1 << Fixed::_fract));
	return (static_cast<float>(this->getRawBits()));
}

int		Fixed::toInt( void ) const { return (static_cast<int>(this->_fixNumber)); }

