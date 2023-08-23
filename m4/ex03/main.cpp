/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:15:04 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/23 20:55:48 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main( void ) {
	Character*	joe = new Character("Joe");
	Ice* ice = new Ice();

	joe->equip(ice);
	joe->equip(ice);
	joe->equip(ice);
	joe->equip(ice);
	joe->equip(ice);
	std::cout << "Joe's inventory" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "inventory[" << i << "] = ";
		if (!joe->getInventory())
			std::cout << "NULL" << std::endl;
		else
			std::cout << joe->getInventory()->getType() << std::endl;
	}
	delete joe;
}
//int main() {
//	std::cout << "---------------------" << std::endl;
//	std::cout << "test on orbs" << std::endl;
//	std::cout << "---------------------" << std::endl;
//	std::cout << "operator=" << std::endl;
//
//	Ice* orb = new Ice();
//	Ice* orb2 = new Ice();
//	orb2 = orb;
//	std::cout << "orb= type: " << orb->getType() << std::endl;
//	std::cout << "orb= type: " << orb2->getType() << std::endl;
//	Ice* orb3 = orb2->clone();
//	std::cout << "clone" << std::endl;
//	std::cout << "orb3 type: " << orb3->getType() << std::endl;
//	delete orb2;
//	delete orb3;
//
//	std::cout << "---------------------" << std::endl;
//	std::cout << "test on cure" << std::endl;
//	std::cout << "---------------------" << std::endl;
//
//	Cure* cure = new Cure();
//	std::cout << "cure type: " << cure->getType() << std::endl;
//	Cure* cure2 = cure->clone();
//	std::cout << "clone" << std::endl;
//	std::cout << "cure2 type: " << cure2->getType() << std::endl;
//	delete cure;
//
//	std::cout << "---------------------" << std::endl;
//	std::cout << "test on cure" << std::endl;
//	std::cout << "---------------------" << std::endl;
//	
//	Character* me = new Character("me");
//	std::cout << "me name: " << me->getName() << std::endl;	
//	delete me;
//
//
//	return (0);
//}
