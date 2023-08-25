/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:30:56 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/25 13:01:23 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <typeinfo>

Character::Character( void ) : ICharacter(), _name("Default"){
	std::cout << G << "Character Default constructor called" << RE << std::endl;	
}

Character::Character( std::string const& name ) : ICharacter(), _name(name) {
	std::cout << G << "Character Constructor called and his name is " << name << RE << std::endl;	
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character( const Character& src ) : _name(src._name + "_copy"){
	std::cout << G << "Character Copy constructor called" << RE << std::endl;	
	this->_name = src._name;
}

Character&	Character::operator=( const Character& src ) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
		}
		if (src._inventory[i]) {
			this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character( void ) {
	std::cout << R << "Character Destructor called" << RE << std::endl;	
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
		}
	}
}

const std::string&	Character::getName( void ) const {
	return (this->_name);
}

void	Character::equip( AMateria* m ) {
	int	i = 0;

	for (int j = 0; j < 4; j++) {
		if (this->_inventory[j] && this->_inventory[j] == m) {
			std::cout << "Materia already equipped" << std::endl;
			return ;
		}
	}
	if (m->getType() != "ice" && m->getType() != "cure") {
		std::cout << "There is no materia to equip" << std::endl;
		return ;
	}
	while (this->_inventory[i] && i < 4)
		i++;
	if (i >= 4) {
		std::cout << "Inventory full" << std::endl;
		return ;
	}
	this->_inventory[i] = m;
	std::cout << "Equipped " << G << m->getType() << RE << " Materia to slot " << i << std::endl;
}

void	Character::unequip( int idx ) {
	if (idx < 0 || idx > 3) {
		std::cout << "Index out of range" << std::endl;
	}
	else if (!this->_inventory[idx]) {
		std::cout << "There is no materia to unequip" << std::endl;
	}
	else {
		std::cout << "Unequipped " << this->_inventory[idx]->getType() << " Materia from slot " << idx << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx <= 3) {
		if (this->_inventory[idx] != NULL) {
			std::cout << this->getName() << " used " << this->_inventory[idx]->getType() 
				<< " on " << target.getName() << std::endl;
			this->_inventory[idx]->use(target);
			delete this->_inventory[idx];
			this->_inventory[idx] = NULL;
		}
		else {
			std::cout << "No Materia in this slot" << std::endl;
		}
	}
	return ;
}

void Character::displayInventory( void ) const {
	std::cout << "Inventory of " << this->getName() << " :" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			std::cout << "Slot " << i << " : " << this->_inventory[i]->getType() << " | ";
			std::cout << "Address " << this->_inventory[i] << std::endl;
		}
		else {
			std::cout << "Slot " << i << " : Empty" << std::endl;
		}
	}
}

AMateria*	Character::putMateriaOnTheGround( int idx ) const {
	return (this->_inventory[idx]);
}
