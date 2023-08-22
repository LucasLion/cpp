/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:04:38 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/21 15:47:11 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat( ) : WrongAnimal() {
	std::cout << G << "WrongCat default constructor called" << RE << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat( const WrongCat& src ) : WrongAnimal() {
	std::cout << G << "WrongCat copy constructor called" << RE << std::endl;
	*this = src;
}

WrongCat&	WrongCat::operator=( const WrongCat& src ) {
	std::cout << G << "WrongCat assignation operator called" << RE << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat( ) {
	std::cout << R << "WrongCat destructor called" << RE << std::endl;
}

void	WrongCat::makeSound( ) const {
	std::cout << "Miaouuuu" << std::endl;
}

void	WrongCat::setType( std::string type ) { this->type = type; }
