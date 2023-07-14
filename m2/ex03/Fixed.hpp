/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:55:14 by llion             #+#    #+#             */
/*   Updated: 2023/07/13 14:22:19 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed {

public:
						Fixed( );
						~Fixed( );
						Fixed( const int num );
						Fixed( const float num );
						Fixed( const Fixed& source );

	Fixed&				operator=( const Fixed &source );

	int					getRawBits( void ) const;
	void				setRawBits( const int raw );
	float				toFloat( void ) const;
	int					toInt( void ) const;

	bool				operator>( const Fixed &source ) const;
	bool				operator<( const Fixed &source ) const;
	bool				operator>=( const Fixed &source ) const;
	bool				operator<=( const Fixed &source ) const;
	bool				operator==( const Fixed &source ) const;
	bool				operator!=( const Fixed &source ) const;

	Fixed				operator+( const Fixed &source ) const ;
	Fixed				operator-( const Fixed &source ) const ;
	Fixed				operator*( const Fixed &source ) const ;
	Fixed				operator/( const Fixed &source ) const ;

	Fixed&				operator++( int );
	Fixed&				operator--( int );
	Fixed&				operator++( void );
	Fixed&				operator--( void );

	static Fixed&		min( Fixed& a, Fixed& b );
	const static Fixed&	min( const Fixed& a, const Fixed& b );
	static Fixed&		max( Fixed& a, Fixed& b );
	const static Fixed&	max( const Fixed& a, const Fixed& b );

private:
	int						_fixNumber;
	static const int		_fract = 10;

};

std::ostream&	operator<<( std::ostream& COUT, const Fixed& source );

#endif
