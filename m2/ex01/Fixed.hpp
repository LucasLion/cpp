/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:55:14 by llion             #+#    #+#             */
/*   Updated: 2023/07/07 12:58:54 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed {

public:
						Fixed();
						~Fixed();
						Fixed( const int num );
						Fixed( const float num );
						Fixed( const Fixed& source );
	Fixed&				operator=( const Fixed &source );
	int					getRawBits( void ) const;
	void				setRawBits( const int raw );
	float				toFloat( void ) const;
	int					toInt( void ) const;

private:
	int					_fixNumber;
	static const int	_fract = 8;

};

std::ostream&		operator<<( std::ostream& COUT, const Fixed& source );

#endif
