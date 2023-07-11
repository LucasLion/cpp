/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:39:14 by llion             #+#    #+#             */
/*   Updated: 2023/07/11 18:41:22 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Fixed   orientation( const Point& p1, const Point& p2, const Point& p3) {
    Fixed vec = (p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) - (p3.getX() - p1.getX()) * (p2.getY() - p1.getY());
    return vec;
}

bool bsp( const Point a, const Point b, const Point c, const Point point) {
    Fixed orientation1 = orientation(a, b, point);
    Fixed orientation2 = orientation(b, point, point);
    Fixed orientation3 = orientation(point, a, point);
    return (orientation1 >= 0 && orientation2 >= 0 && orientation3 >= 0) ||
           (orientation1 < 0 && orientation2 < 0 && orientation3 < 0);
}
