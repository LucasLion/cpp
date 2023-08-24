/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:15:04 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/24 18:23:06 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

// TODO regler le probleme de leak des materias au sol
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
//int main( void ) {
//	Character*	joe = new Character("Joe");
//	Character*	enemy = new Character("Enemy");
//
//	AMateria*	ice = new Ice();
//	AMateria*	cure = new Cure();
//	AMateria* 	ice2 = new Ice();
//	AMateria* 	ice3 = new Ice();
//	Cure*		cure2 = new Cure();
//
//	*ice3 = *ice2;
//	joe->equip(ice);
//	joe->equip(cure);
//	joe->equip(cure2);
//	joe->equip(ice3);
//	joe->unequip(3);
//
//	std::cout << "----------Character copy constructor-----------" << std::endl;
//	Character*	jack = new Character("jack");
//	jack->displayInventory();
//	*jack = *joe;
//	jack->displayInventory();
//
//	std::cout << "----------Use materias-----------" << std::endl;
//	joe->use(1, *joe);
//	joe->use(2, *enemy);
//	joe->use(3, *enemy);
//	joe->displayInventory();
//
//	std::cout << "----------display inventory-----------" << std::endl;
//	joe->displayInventory();
//
//	MateriaSource*	book = new MateriaSource;	
//
//	book->learnMateria(cure);
//	std::cout << "book : " << std::endl;
//	book->displayBook();
//	delete joe;
//	delete jack;	
//	delete enemy;
//	return (0);
//}
////int main() {
////	std::cout << "---------------------" << std::endl;
////	std::cout << "test on orbs" << std::endl;
////	std::cout << "---------------------" << std::endl;
////	std::cout << "operator=" << std::endl;
////
////	Ice* orb = new Ice();
////	Ice* orb2 = new Ice();
////	orb2 = orb;
////	std::cout << "orb= type: " << orb->getType() << std::endl;
////	std::cout << "orb= type: " << orb2->getType() << std::endl;
////	Ice* orb3 = orb2->clone();
////	std::cout << "clone" << std::endl;
////	std::cout << "orb3 type: " << orb3->getType() << std::endl;
////	delete orb2;
////	delete orb3;
////
////	std::cout << "---------------------" << std::endl;
////	std::cout << "test on cure" << std::endl;
////	std::cout << "---------------------" << std::endl;
////
////	Cure* cure = new Cure();
////	std::cout << "cure type: " << cure->getType() << std::endl;
////	Cure* cure2 = cure->clone();
////	std::cout << "clone" << std::endl;
////	std::cout << "cure2 type: " << cure2->getType() << std::endl;
////	delete cure;
////
////	std::cout << "---------------------" << std::endl;
////	std::cout << "test on cure" << std::endl;
////	std::cout << "---------------------" << std::endl;
////	
////	Character* me = new Character("me");
////	std::cout << "me name: " << me->getName() << std::endl;	
////	delete me;
////
////
////	return (0);
////}
