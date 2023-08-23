/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:45:45 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/23 16:21:52 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Cure::Cure( void ) : _type("cure") {
	std::cout << G << "Cure default constructor called" << RE << std::endl;
}

Cure::~Cure( void ) {
	std::cout << R << "Cure destructor called" << RE << std::endl;
}

Cure&	Cure::operator=( const Cure& src ) {
	std::cout << "Cure Assignation operator called" << RE << std::endl;
	this->_type = src.getType();
	return (*this);
}

std::string	const& Cure::getType( void ) const {
	return (this->_type);
}

Cure*	Cure::clone( void ) const {
	Cure* clone = new Cure;
	return (clone);
}

void	Cure::use( ICharacter& target ) {
	(void)target;
	std::cout << Y << "* heals " << "target" << "’s wounds *" << RE << std::endl;
}


