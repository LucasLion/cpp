/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:40:26 by llion             #+#    #+#             */
/*   Updated: 2023/07/11 17:53:13 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {

public:
				Point( void );
				Point( const Point &src );
				Point( const float &x, const float &y );
				Point( const Fixed &x, const Fixed &y );
				~Point(void );
	Point		&operator=(const Point &other );
	Fixed		getX( void ) const;
	Fixed		getY( void ) const;
	void		setX( const Fixed &x );
	void		setY( const Fixed &y );

private:
	const Fixed	_x;
	const Fixed	_y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

