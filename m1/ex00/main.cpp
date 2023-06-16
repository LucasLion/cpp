/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 01:39:29 by llion             #+#    #+#             */
/*   Updated: 2023/06/16 15:08:29 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombie4;
	delete zombie5;
	return (0);

}
