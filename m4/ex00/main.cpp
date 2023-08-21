/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:28:11 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/21 15:53:05 by llion@student    ###   ########.fr       */
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
	return (0);
}
