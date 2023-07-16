/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:42:38 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 18:00:20 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( ) : _name("default DiamondTrap") {
	std::cout << "\033[32mDiamondTrap Default constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : _name(name) {
	std::cout << "\033[32mDiamondTrap Name constructor called\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "\033[31mDiamondTrap Destructor called\033[0m" << std::endl;
}
