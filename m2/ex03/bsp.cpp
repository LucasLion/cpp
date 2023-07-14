/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:39:14 by llion             #+#    #+#             */
/*   Updated: 2023/07/13 11:12:50 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

//Fixed   orientation( const Point& p1, const Point& p2, const Point& p3) {
//    Fixed vec = (p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) - (p3.getX() - p1.getX()) * (p2.getY() - p1.getY());
//    return vec;
//}

Fixed orientation(const Point& p1, const Point& p2, const Point& p3) {
    Fixed vec = (p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) - (p2.getY() - p1.getY()) * (p3.getX() - p1.getX());
    return vec;
}

bool bsp( const Point a, const Point b, const Point c, const Point point) {
    Fixed orientation1 = orientation(a, b, point);
    Fixed orientation2 = orientation(point, b, c);
    Fixed orientation3 = orientation(a, point, c);
    if (orientation1 == 0 || orientation2 == 0 || orientation3 == 0) {
        return false;  // Si l'une des orientations est nulle, le point est sur une ligne, donc il est exclu
    }
    
    return (orientation1 > 0 && orientation2 > 0 && orientation3 > 0) ||
           (orientation1 < 0 && orientation2 < 0 && orientation3 < 0);
}
