/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:51:12 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 14:54:55 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "\033[32mFragTrap Default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "\033[32mFragTrap Constructor called\033[0m" << std::endl;
	this->setHealth(100);
	this->setEnergy(100);
	this->setDamage(30);
}

void	FragTrap::operator=( const FragTrap& source ) {
	std::cout << "\033[32mFragTrap Assignation operator called\033[0m" << std::endl;
	this->setName(source.getName());
	this->setHealth(source.getHealth());
	this->setEnergy(source.getEnergy());
	this->setDamage(source.getDamage());
}

FragTrap::~FragTrap() {
	std::cout << "\033[31mFragTrap Destructor called\033[0m" << std::endl;
}

void	FragTrap::attack(const std::string& target ) {
	if (this->getEnergy() > 0 && this->getHealth() > 0) {
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing \033[31m" << this->getDamage() << "\033[0m points of damages" << std::endl;
		this->setEnergy(std::max(this->getEnergy() - 1, 0));
	}
	else if (this->getHealth() <= 0)
		std::cout << "FragTrap " << this->getName() << " tries to attack but " << this->getName() << " is \033[31mdead\033[0m" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " tries to attack but " << this->getName() << " is \033[31mout of energy \033[0m" << std::endl;

}

void	FragTrap::highFivesGuys( void ) const {
	std::cout << "FragTrap " << this->getName() << " have enterred in \033[32mHigh five\033[0m mode" << std::endl;
}
