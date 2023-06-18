/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:32:58 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 19:33:22 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

std::string	HumanB::getName(void) { return this->_name; }

void	HumanB::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
