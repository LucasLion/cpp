/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:15:04 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/25 13:12:00 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

/*
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* m1;
	m1 = src->createMateria("ice");
	me->equip(m1);
	m1 = src->createMateria("cure");
	me->equip(m1);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
*/
// TODO regler le probleme de leak des materias au sol
int main( void ) {
	MateriaSource*	book = new MateriaSource();
	Character*		joe = new Character("Joe");
	Character*		enemy = new Character("Enemy");

	book->learnMateria(new Ice());
	book->learnMateria(new Cure());
		
	AMateria* m1 = book->createMateria("ice");
	AMateria* m2 = book->createMateria("cure");
	AMateria* m3 = book->createMateria("ice");
	AMateria* m4 = book->createMateria("cure");

	joe->equip(m1);
	joe->equip(m2);
	joe->equip(m3);
	joe->equip(m4);
	joe->unequip(2);
	delete m3;

	std::cout << "----------Character copy constructor-----------" << std::endl;
	Character*	jack = new Character("jack");
	jack->displayInventory();
	*jack = *joe;
	jack->displayInventory();

	std::cout << "----------Use materias-----------" << std::endl;
	joe->use(0, *joe);
	joe->use(1, *enemy);
	jack->use(1, *joe);
	std::cout << "----------display inventory-----------" << std::endl;
	joe->displayInventory();
	jack->displayInventory();

	
	std::cout << "book : " << std::endl;
	delete book;
	delete joe;
	delete jack;	
	delete enemy;
	return (0);
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
