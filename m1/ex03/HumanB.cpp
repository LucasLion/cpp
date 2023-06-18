/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:32:58 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 19:46:05 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon) {
	std::cout << "HumanA created" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanA destroyed" << std::endl;
}


std::string	HumanB::getName(void) { return this->_name; }

void	HumanB::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
