/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:41:36 by llion             #+#    #+#             */
/*   Updated: 2023/07/13 14:40:14 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point P1;
	Point P2(Fixed(4.18f), Fixed(3.02f));
	Point P3(P2);
	Point P4(Fixed(9.16f), Fixed(10.12f));
	Point P5(Fixed(2.56f), Fixed(2.08f));
	Point P(Fixed(1.5f), Fixed(1.5f)); 
	Point P6 = P;
	Point P7(Fixed(-0.5f), Fixed(-0.5f));
	Point P8((float)(1.11f), (float)(-1.44f));
	Point P9((float)(5.12f), (float)(-4.16f));
	Point P10((float)(6.33f), (float)(-2.76f));
	
	Point Tc(0, 0);
	Point Ta(5.12, 4.16);
	Point Tb(1.18, -6.49);

	std::cout << std::endl;
	std::cout << "P1 -> false (top - default constructor (red))" << std::endl;
	std::cout << "x: " << P1.getX() << " y: " << P1.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P1))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;

	std::cout << "P2 -> true (inside - Fixed constructor (green))" << std::endl;
	std::cout << "x: " << P2.getX() << " y: " << P2.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P2))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;
	
	std::cout << "P3 -> true (inside - copy constructor (purple))" << std::endl;
	std::cout << "x: " << P3.getX() << " y: " << P3.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P3))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;

	std::cout << "P4 -> false (outside - Fixed constructor (orange))" << std::endl;
	std::cout << "x: " << P4.getX() << " y: " << P4.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P4))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;

	std::cout << "P5 -> false (edge - Fixed constructor (cyan))" << std::endl;
	std::cout << "x: " << P5.getX() << " y: " << P5.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P5))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;

	std::cout << "P6 -> false (outside - operator= (magenta))" << std::endl;
	std::cout << "x: " << P6.getX() << " y: " << P6.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P6))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;

	std::cout << "P7 -> false (outside - Fixed constructor (yellow))" << std::endl;
	std::cout << "x: " << P7.getX() << " y: " << P7.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P7))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;

	std::cout << "P8 -> true (inside - float constructor (grey))" << std::endl;
	std::cout << "x: " << P8.getX() << " y: " << P8.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P8))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;

	std::cout << "P9 -> false (outside - float constructor (peru))" << std::endl;
	std::cout << "x: " << P9.getX() << " y: " << P9.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P9))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;

	std::cout << "P10 -> false (outside - float constructor (black))" << std::endl;
	std::cout << "x: " << P10.getX() << " y: " << P10.getY() << std::endl;
	std::cout << "Return value: ";
	if (bsp(Ta, Tb, Tc, P10))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << std::endl;
	return 0; }
