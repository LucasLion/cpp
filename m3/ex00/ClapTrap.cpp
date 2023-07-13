/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:01:33 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/13 17:22:04 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ) { }

ClapTrap::ClapTrap( const ClapTrap& source ) {
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& source ) {
	return (*this);
}

ClapTrap::~ClapTrap( ) { }

std::string	ClapTrap::getName( void ) const { return this->_name;} 

int	ClapTrap::getHealth( void ) const { return this->_health; }

int	ClapTrap::getEnergy( void ) const { return this->_energy; }

int	ClapTrap::getDamage( void ) const { return this->_damage; }

void	ClapTrap::setName( const std::string name ) { this->_name = name; };

void	ClapTrap::setHealth( int health ) { this->_health = health; };

void	ClapTrap::setEnergy( int energy ) { this->_energy = energy; };

void	ClapTrap::setDamage( int damage ) { this->_damage = damage; };
 
void	attack( const std::string& target ) {
}

void	takeDamage( unsigned int amount ) {
}

void	beRepaired( unsigned int amount ) {
}

