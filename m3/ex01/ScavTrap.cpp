/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:27:42 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 17:17:34 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "\033[32mScavTrap Default constructor called\033[0m" << std::endl;
	this->setName("default ScavTrap");
	this->setHealth(100);
	this->setEnergy(50);
	this->setDamage(20);
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "\033[32mScavTrap Constructor called\033[0m" << std::endl;
	this->setHealth(100);
	this->setEnergy(50);
	this->setDamage(20);
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& source ) {
	std::cout << "\033[32mScavTrap Assignation operator called\033[0m" << std::endl;
	this->setName(source.getName());
	this->setHealth(source.getHealth());
	this->setEnergy(source.getEnergy());
	this->setDamage(source.getDamage());
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[31mScavTrap Destructor called\033[0m" << std::endl;
}

void	ScavTrap::attack( std::string const & target ) {
	if (this->getEnergy() > 0 && this->getHealth() > 0) {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing \033[31m" << this->getDamage() << "\033[0m points of damages !" << std::endl;
		this->setEnergy(std::max(this->getEnergy() - 1, 0));
	}
	else if (this->getHealth() <= 0)
		std::cout << "ScavTrap " << this->getName() << " tries to attack but  " << this->getName() << "is \033[31mdead\033[0m" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " is out of energy and can't attack " << target << std::endl;
}

void	ScavTrap::guardGate( void ) const {
	std::cout << "ScavTrap " << this->getName() << " have enterred in \033[32mGate keeper\033[0m mode" << std::endl;
}

