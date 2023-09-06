/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:05 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 14:05:56 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main( void ) {

	Base* base = new Base;

	std::cout << Y << "Identify types passing the address" << RE << std::endl;
	for (int i = 0; i < 5; i++) {
		Base* rand;
		rand = base->generate();
		rand->identify(rand);
		delete rand;
	}
	std::cout << Y << "Identify types passing the address" << RE << std::endl;
	for (int i = 0; i < 5; i++) {
		Base* rand;
		rand = base->generate();
		rand->identify(*rand);
		delete rand;
	}
}
