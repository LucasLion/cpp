/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:15:04 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/29 16:12:08 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

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
	AMateria* m5 = book->createMateria("cure6684");

	joe->equip(m1);
	joe->equip(m2);
	joe->equip(m3);
	joe->equip(m4);
	std::cout << "-----" << std::endl;
	joe->equip(m5);
	std::cout << "-----" << std::endl;
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
	jack->use(5, *enemy);
	std::cout << "----------display inventory-----------" << std::endl;
	joe->displayInventory();
	jack->displayInventory();

	delete book;
	delete joe;
	delete jack;	
	delete enemy;
	return (0);
}

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

