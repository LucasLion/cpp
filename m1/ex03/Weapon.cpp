/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:42:29 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 20:57:23 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destroyed" << std::endl;
}

std::string const	&Weapon::getType(void) const { return this->_type; }

void				Weapon::setType(std::string type) { this->_type = type; }
