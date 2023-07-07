/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:55:14 by llion             #+#    #+#             */
/*   Updated: 2023/07/07 10:54:08 by llion            ###   ########.fr       */
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
						Fixed( Fixed& source );
	void				operator=( Fixed &source );
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );

private:
	int					_fixNumber;
	static const int	_fract = 8;

};
#endif
