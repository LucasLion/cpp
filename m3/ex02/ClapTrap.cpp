/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:01:33 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 14:50:04 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <algorithm>

ClapTrap::ClapTrap( ) {
	std::cout << "\033[32mClapTrap Default constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap( const std::string name ) : _name(name), _health(10), _energy(10), _damage(0){
	std::cout << "\033[32mClapTrap Constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& source ) {
	std::cout << "\033[32mClapTrap Copy constructor called\033[0m" << std::endl;
	*this = source;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& source ) {
	if (this != &source) {
		std::cout << "\033[32mClapTrap Assignation operator called\033[0m" << std::endl;
		this->setName(source.getName());
		this->setHealth(source.getHealth());
		this->setEnergy(source.getEnergy());
		this->setDamage(source.getDamage());
	}
	return (*this);
}

ClapTrap::~ClapTrap( ) {
	std::cout << "\033[31mClapTrap Destructor called\033[0m" << std::endl;
}

std::string	ClapTrap::getName( void ) const { return this->_name;} 

int	ClapTrap::getHealth( void ) const { return this->_health; }

int	ClapTrap::getEnergy( void ) const { return this->_energy; }

int	ClapTrap::getDamage( void ) const { return this->_damage; }

void	ClapTrap::setName( const std::string name ) { this->_name = name; };

void	ClapTrap::setHealth( int health ) { this->_health = health; };

void	ClapTrap::setEnergy( int energy ) { this->_energy = energy; };

void	ClapTrap::setDamage( int damage ) { this->_damage = damage; };
 
void	ClapTrap::attack( const std::string& target ) {
	if (this->getEnergy() > 0 && this->getHealth() > 0) {
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing \033[31m" << this->getDamage() << "\033[0m points of damage" << std::endl;
		this->setEnergy(std::max(this->getEnergy() - 1, 0));
	}
	else if (this->getHealth() <= 0)
		std::cout << this->getName() << " tries to attack but " << this->getName() << " is \033[31m dead\033[0m" << std::endl;
	else
		std::cout << this->getName() << " tries to attack but "  << " is out of \033[31menergy\033[0m" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (this->getHealth() > 0) {
		std::cout << this->getName() << " takes \033[31m" << amount << "\033[0m damages" << std::endl;
		this->setHealth(std::max(this->getHealth() - (int)amount, 0));
	}
	else
		std::cout << this->getName() << " would take damages but " << this->getName() << " is \033[31m dead\033[0m" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->getEnergy() > 0 && this->getHealth() > 0) {
		std::cout << this->getName() << " gets \033[32m" << amount << "\033[0m health back" << std::endl;
		this->setHealth(std::min(this->getHealth() + (int)amount, 100));
		this->setEnergy(std::max(this->getEnergy() - 1, 0));
	}
	else if (this->getHealth() <= 0)
		std::cout << this->getName() << " tries to repair but " << this->getName() << " is\033[31m dead\033[0m" << std::endl;
	else 
		std::cout << this->getName() << " tries to repair but "  << " is \033[31mout of energy\033[0m" << std::endl;
}

