/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:34:07 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 19:34:15 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

std::string	HumanA::getName(void) { return this->_name; }

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
