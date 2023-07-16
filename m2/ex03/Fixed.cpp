/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:28:48 by llion             #+#    #+#             */
/*   Updated: 2023/07/16 11:59:08 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "math.h"

Fixed::Fixed() { this->_fixNumber = 0; }

Fixed::~Fixed() { }

Fixed::Fixed( int const num ) { this->_fixNumber = num << Fixed::_fract; }

Fixed::Fixed( float const num ) { this->_fixNumber = roundf(num * (1 << Fixed::_fract)); }

Fixed::Fixed( const Fixed& source ) { *this = source; }

Fixed&	Fixed::operator=( const Fixed& source ) {
	if (this != &source) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->_fixNumber = source.getRawBits();
	}
	return (*this);
}

bool	Fixed::operator>( const Fixed& source ) const { return (this->_fixNumber > source.getRawBits()); }

bool	Fixed::operator<( const Fixed& source ) const { return (this->_fixNumber < source.getRawBits()); }

bool	Fixed::operator>=( const Fixed& source ) const { return (this->_fixNumber >= source.getRawBits()); }

bool	Fixed::operator<=( const Fixed& source ) const { return (this->_fixNumber <= source.getRawBits()); }

bool	Fixed::operator==( const Fixed& source ) const { return (this->_fixNumber == source.getRawBits()); }

bool	Fixed::operator!=( const Fixed& source ) const { return (this->_fixNumber != source.getRawBits()); }

Fixed Fixed::operator+( const Fixed& source ) const {
	Fixed tmp(this->toFloat() + source.toFloat());
	return (tmp);
}

Fixed Fixed::operator-( const Fixed& source ) const {
	Fixed tmp(this->toFloat() - source.toFloat());
	return (tmp);
}

Fixed Fixed::operator*( const Fixed& source ) const {
	Fixed tmp(this->toFloat() * source.toFloat());
	return (tmp);
}

Fixed Fixed::operator/( const Fixed& source ) const {
	Fixed tmp(this->toFloat() / source.toFloat());
	return (tmp);
}

Fixed& Fixed::operator++( void ) {
	this->_fixNumber += 1; 
	return (*this);
}

Fixed& Fixed::operator--( void ) {
	this->_fixNumber -= 1;
	return (*this);
}

Fixed& Fixed::operator++( int ) {
	Fixed&	tmp(*this);
	this->_fixNumber += 1;
	return (tmp);
}

Fixed& Fixed::operator--( int ) {
	Fixed&	tmp(*this);
	this->_fixNumber -= 1;
	return (tmp);
}

Fixed&	Fixed::min( Fixed& a, Fixed& b ) {
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min( const Fixed& a, const Fixed& b ) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max( Fixed& a, Fixed& b ) {
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed& a,const Fixed& b){
	if (a > b)
		return (a);
	else
		return (b);
}

int	Fixed::getRawBits( void ) const {
	return (this->_fixNumber);
}

void	Fixed::setRawBits( int const raw ) { this->_fixNumber = raw; }

float	Fixed::toFloat( void ) const { 
	return (static_cast<float>(this->_fixNumber) / static_cast<float>(1 << Fixed::_fract));
}

int		Fixed::toInt( void ) const { return (this->_fixNumber >> Fixed::_fract); }

std::ostream&		operator<<( std::ostream& COUT, const Fixed& f ) {
	COUT << f.toFloat();
	return (COUT);
}

