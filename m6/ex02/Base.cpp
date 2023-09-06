/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:03:42 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 12:11:31 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base( void ) {}

Base*	Base::generate( void ) {
	int i = std::rand() % 3;
	switch (i) {
		case 0: {
			A* a = new A();
			return (a);
				}
		case 1: {
			B* b = new B();
			return (b);
				}
		case 2: {
			C* c = new C();
			return (c);
				}
		default:
				return (NULL);
	}
}


