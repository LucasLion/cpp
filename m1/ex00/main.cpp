/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 01:39:29 by llion             #+#    #+#             */
/*   Updated: 2023/06/16 01:43:23 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name) {

	Zombie*	zombie = new Zombie;
	
	(*zombie).setName(name);
	std::cout << "Zombie created on the heap" << std::endl;
	return zombie;
}

void randomChump( std::string name ) {
	Zombie zombie;

	zombie.setName(name);
	std::cout << "Zombie created on the stack" << std::endl;
}

// TODO: utiliser ces fonctions
int main() {
	Zombie *zombie1 = newZombie("Zombie1");	
	Zombie *zombie2 = newZombie("Zombie2");
	Zombie *zombie3 = newZombie("Zombie3");
	Zombie *zombie4 = newZombie("Zombie4");
	Zombie *zombie5 = newZombie("Zombie5");
	randomChump("Zombie6");
	randomChump("Zombie7");
	randomChump("Zombie8");
	randomChump("Zombie9");
	randomChump("Zombie10");
	return (0);

}
