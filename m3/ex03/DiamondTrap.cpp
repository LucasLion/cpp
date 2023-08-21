/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:42:38 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/18 11:16:10 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( ) : ClapTrap("default_clap_name"), _name("default DiamondTrap") {
	std::cout << "\033[32mDiamondTrap Default constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), _name(name) {
	std::cout << "\033[32mDiamondTrap Name constructor called\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "\033[31mDiamondTrap Destructor called\033[0m" << std::endl;
}

std::string DiamondTrap::getName( void ) const { return this->_name; }

void	DiamondTrap::whoAmI( void ) {
	std::cout << "I am " << this->getName() << std::endl;
}
 
