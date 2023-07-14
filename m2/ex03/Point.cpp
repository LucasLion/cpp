/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:40:24 by llion             #+#    #+#             */
/*   Updated: 2023/07/11 17:49:28 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {  }

Point::Point(const Point &src): _x(src.getX()), _y(src.getY()) {  }

Point::Point(const float &x, const float &y): _x(x), _y(y) {  }

Point::Point(const Fixed &x, const Fixed &y): _x(x), _y(y) {  }

Point::~Point(void) {  }

Point&	Point::operator=(const Point &other) {
	if (this != &other) {
		this->setX(other.getX());
		this->setY(other.getY());
	}
	return (*this);
}

Fixed	Point::getX(void) const { return (_x); }

Fixed	Point::getY(void) const { return (_y); }

void	Point::setX(const Fixed &x) { const_cast<Fixed&>(_x) = x; }

void	Point::setY(const Fixed &y) { const_cast<Fixed&>(_y) = y; }





