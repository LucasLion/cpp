/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:28:11 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 15:24:36 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	Animal animal;
	Animal animal2;

	const Animal* meta = new Animal();
	const Animal* doggo = new Dog();
	const Animal* catto = new Cat();

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << std::endl;
	std::cout << doggo->getType() << " " << std::endl;
	std::cout << catto->getType() << " " << std::endl;
	meta->makeSound();
	catto->makeSound();
	doggo->makeSound();

	delete meta;
	delete doggo;
	delete catto;

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << std::endl;

	animal2 = animal;	

	std::cout << animal.getType() << std::endl;
	std::cout << animal2.getType() << std::endl;
	std::cout << "J'aime les " << animal.getType() << std::endl;
	std::cout << "J'aime les " << animal2.getType() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << std::endl;

	
	const WrongAnimal* wa = new WrongCat();

	wa->makeSound();
	std::cout << wa->getType() << std::endl;
	delete wa;

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << std::endl;

	Brain* brain = new Brain();

	for (int i = 0; i < 100; i++)
		brain->setIdea(i);

	for (int i = 0; i < 10; i++)
		std::cout << brain->getIdea(i) << std::endl;

	Brain* brain_copy = brain;

	for (int i = 0; i < 10; i++)
		std::cout << brain_copy->getIdea(i) << std::endl;
	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "Animal brain" << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		std::cout << brain_copy->getIdea(i) << std::endl;
	delete brain;

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "Animals array" << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << std::endl;

	const Animal* animals[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}	
	for (int i = 0; i < 10; i++)
		std::cout << animals[i]->getType() << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];

	const Animal*j = new Dog();
	const Animal*i = new Cat();
	delete j;
	delete i;

	return (0);
}
