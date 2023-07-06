/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:55:14 by llion             #+#    #+#             */
/*   Updated: 2023/07/07 00:02:16 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed {

public:
						Fixed();
						Fixed( const Fixed& source );
	void				operator=( Fixed &source );
						~Fixed();
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );

private:
	int					_fixNumber;
	static const int	_fract = 8;

};
#endif
