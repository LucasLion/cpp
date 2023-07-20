/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:28:11 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/20 14:12:35 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <string>

int main(void) {
	Animal animal;
	Animal animal2;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << std::endl;
	animal2 = animal;	
	std::cout << animal.getType() << std::endl;
	std::cout << animal2.getType() << std::endl;
	std::cout << "J'aime les " << animal.getType() << std::endl;
	std::cout << "J'aime les " << animal2.getType() << std::endl;

	std::string str = "Je suis une string";

	size_t f = str.max_size();
	std::cout << f << std::endl;
	delete meta;
	delete j;
	delete i;
	return (0);
}
