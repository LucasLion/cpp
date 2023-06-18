/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:34:07 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 21:11:25 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) {
	this->_name = name;
	this->_weapon = weapon;
	std::cout << "HumanA created" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destroyed" << std::endl;
}

std::string	HumanA::getName(void) { return this->_name; }

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
