/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:32:58 by llion             #+#    #+#             */
/*   Updated: 2023/06/19 15:48:41 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	std::cout << "HumanA created" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanA destroyed" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }

std::string	HumanB::getName(void) { return this->_name; }

void	HumanB::attack() {
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks but he has no weapon so he dies" << std::endl;
}
