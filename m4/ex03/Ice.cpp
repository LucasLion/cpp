/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:45:45 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/29 15:32:13 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <cwchar>
#include <stdio.h>

Ice::Ice( void ) : AMateria("ice"), _type("ice") {
	std::cout << G << "Ice default constructor called" << RE << std::endl;
}

Ice::Ice( const Ice& src ) : AMateria(src), _type(src.getType()) {
	std::cout << G << "Ice copy constructor called" << RE << std::endl;
}

Ice::~Ice( void ) {
	std::cout << R << "Ice destructor called" << RE << std::endl;
}

Ice&	Ice::operator=( const Ice& src ) {
	std::cout << "Ice Assignation operator called" << RE << std::endl;
	this->_type = src.getType();
	return (*this);
}

std::string	const& Ice::getType( void ) const {
	return (this->_type);
}

Ice*	Ice::clone( void ) const {
	Ice* clone = new Ice;
	return (clone);
}

void	Ice::use(ICharacter& target) {
	std::cout << Y << "* shoots an ice bolt at " <<  target.getName() << " *" << RE << std::endl;
}


