/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:41:36 by llion             #+#    #+#             */
/*   Updated: 2023/07/11 18:41:52 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point P1; //default constructor P1 = (0 ; 0)
	Point P2(Fixed(4.18f), Fixed(3.02f)); // Fixed constructor P2 = (4.18 ; 3.02)
	Point P3(P2); // copy constructor P3 = P2 = (4.18 ; 3.02)
	Point P4(Fixed(94.16f), Fixed(100.12f));
	Point P5(Fixed(2.56f), Fixed(2.08f));
	Point P(Fixed(1.5f), Fixed(1.5f)); 
	Point P6 = P; // Assignation operator used
	Point P7(Fixed(-0.5f), Fixed(-0.5f));
	
	//2.56 ; 2.08 part of the vertex
	Point Tc(0, 0);
	Point Ta(5.12, 4.16);
	Point Tb(1.18, -6.49);

	Point Tx(0, 3.02);
	Point Ty(5, 3.02);
	Point Tz(2.5, 0);

	// One of the vertexes
	std::cout << std::endl;
	std::cout << "P1: one of the vertexes, should be false" << std::endl;
	std::cout << "x: " << P1.getX() << " y: " << P1.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P1) << std::endl;

	// Inside the triangle
	std::cout << std::endl;
	std::cout << "P2: inside the triangle, should be true" << std::endl;
	std::cout << "x: " << P2.getX() << " y: " << P2.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P2) << std::endl;
	
	// On the edge
	std::cout << std::endl;
	std::cout << "P3: on the edge, should be false" << std::endl;
	std::cout << "x: " << P3.getX() << " y: " << P3.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Tx, Ty, Tz, P3) << std::endl;

	// Outside the triangle
	std::cout << std::endl;
	std::cout << "P4: outside the triangle, should be false" << std::endl;
	std::cout << "x: " << P4.getX() << " y: " << P4.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P4) << std::endl;

	// On the edge
	std::cout << std::endl;
	std::cout << "P5: on the edge, should be false" << std::endl;
	std::cout << "x: " << P5.getX() << " y: " << P5.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P5) << std::endl;

	// Inside
	std::cout << std::endl;
	std::cout << "P6: inside, should be true" << std::endl;
	std::cout << "x: " << P6.getX() << " y: " << P6.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Tx, Ty, Tz, P6) << std::endl;

	// Outside
	std::cout << std::endl;
	std::cout << "P7: outside the triangle, should be false" << std::endl;
	std::cout << "x: " << P7.getX() << " y: " << P7.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Tx, Ty, Tz, P7) << std::endl;
	return 0; }
