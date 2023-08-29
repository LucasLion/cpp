/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:45:45 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/29 15:37:46 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Cure::Cure( void ) : AMateria("cure"), _type("cure") {
	std::cout << G << "Cure default constructor called" << RE << std::endl;
}

Cure::Cure( const AMateria& src ) : AMateria(src), _type(src.getType()) {
	std::cout << G << "Cure copy constructor called" << RE << std::endl;
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
	std::cout << Y << "* heals " << target.getName() << "’s wounds *" << RE << std::endl;
}


