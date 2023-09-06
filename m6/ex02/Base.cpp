/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:03:42 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 14:04:20 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base( void ) {}

struct Types {
	std::string	TYPE_A;
	std::string	TYPE_B;
	std::string	TYPE_C;
};

Base*	Base::generate( void ) {
	int i = std::rand() % 3;
	switch (i) {
		case 0: {
			A* a = new A;
			return (a);
				}
		case 1: {
			B* b = new B;
			return (b);
				}
		case 2: {
			C* c = new C;
			return (c);
				}
		default:
				throw std::exception();
	}
}

void	Base::identify( Base* p ) {
	if (dynamic_cast<A *>(p))
		std::cout << "Type: A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "Type: B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "Type: C" << std::endl;
}

void	Base::identify( Base& p ) {
	try {
		A& a = dynamic_cast<A &>(p);
		std::cout << "Type: A" << std::endl;
		static_cast<void>(a);
	}
	catch (const std::exception& e) {}
	try {
		B& b = dynamic_cast<B &>(p);
		std::cout << "Type: B" << std::endl;
		static_cast<void>(b);
	}
	catch (const std::exception& e) {}
	try {
		C& c = dynamic_cast<C &>(p);
		std::cout << "Type: C" << std::endl;
		static_cast<void>(c);
	}
	catch (const std::exception& e) {}
}

