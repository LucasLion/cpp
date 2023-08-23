/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:30:56 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/23 16:16:49 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character( void ) : ICharacter(), _name("Default"){
	std::cout << G << "Character Default constructor called" << RE << std::endl;	
}

Character::Character( std::string const& name ) : ICharacter(), _name(name) {
	std::cout << G << "Character Constructor called and his name is " << name << RE << std::endl;	
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( const Character& src ) {
	std::cout << G << "Character Copy constructor called" << RE << std::endl;	
	this->_name = src._name;
	//for (int i = 0; i < 4; i++) {
	//	if (this->_inventory[i])
	//		delete this->_inventory[i];
	//	this->_inventory[i] = NULL;
	//}
}

Character::~Character( void ) {
	std::cout << R << "Character Destructor called" << RE << std::endl;	

}

const std::string&	Character::getName( void ) const {
	return (this->_name);
}

void	Character::equip( AMateria* m ) {
	int	i = 0;
	if (!m) {
		std::cout << "There is no materia to equip" << std::endl;
	}
	while (this->_inventory[i] && i < 4)
		i++;
	if (i >= 4) {
		std::cout << "Inventory full" << std::endl;
		return ;
	}
	this->_inventory[i] = m;
	std::cout << "Equipped Materia " << m->getType() << "to slot " << i << std::endl;
}

void	Character::unequip( int idx ) {
	(void)idx;
	return ;
}

void	Character::use( int idx, ICharacter& target ) {
	(void)idx;
	(void)target;
	return ;
}
