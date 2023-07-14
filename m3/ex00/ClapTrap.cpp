/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:01:33 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/14 17:42:57 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <algorithm>

ClapTrap::ClapTrap( ) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const std::string name ) : _name(name), _health(10), _energy(10), _damage(0){
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& source ) {
	(void)source;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& source ) {
	(void)source;
	return (*this);
}

ClapTrap::~ClapTrap( ) {
	std::cout << "Destructor called" << std::endl;
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
	std::cout << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << this->getName() << " takes " << amount << " damages!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << this->getName() << " gets " << amount << " health " << std::endl;
}

