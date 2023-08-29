/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:57:20 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/29 15:33:19 by llion@student    ###   ########.fr       */


#include <iostream>
#include <cstdio>
#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("AMateria") {
	std::cout << G << "AMateria default constructor called" << RE << std::endl;
}

AMateria::AMateria( std::string const& type ) : _type(type) {
	std::cout << G << "AMateria type constructor called" << RE << std::endl;
}

AMateria::AMateria( AMateria const & src ) : _type(src._type) {
	std::cout << G << "AMateria copy constructor called" << RE << std::endl;

}

AMateria::~AMateria( void ) {
	std::cout << R << "AMateria destructor called" << RE << std::endl;
}

AMateria&	AMateria::operator=( const AMateria& src ) {
	std::cout << "AMateria Assignation operator called" << RE << std::endl;
	this->_type = src.getType();
	return (*this);
}

std::string const&	AMateria::getType( void ) const {
	return (this->_type);
}

void	AMateria::setType( const std::string& type ) {
	this->_type = type;
}

void	AMateria::use( ICharacter& target ) {
	(void)target;
	std::cout << Y << "* shoots an ice bolt at " <<  "target" << " *" << RE << std::endl;
}

std::ostream&	operator<<( std::ostream& os, const AMateria& src ) {
	os << src.getType();
	return (os);
}
