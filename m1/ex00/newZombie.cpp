/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:34:33 by llion             #+#    #+#             */
/*   Updated: 2023/06/16 14:58:19 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name) {
	Zombie*	zombie = new Zombie;
	
	(*zombie).setName(name);
	std::cout << name << " created on the heap" << std::endl;
	return zombie;
}

