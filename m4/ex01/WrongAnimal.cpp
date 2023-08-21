/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:11:24 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/21 15:35:21 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
	std::cout << G << "WrongAnimal default constructor called" << RE << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) {
	std::cout << G << "WrongAnimal copy constructor called" << RE << std::endl;
	*this = src;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& src ) {
	std::cout << G << "WrongAnimal assignation operator called" << RE << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << R << "WrongAnimal destructor called" << RE << std::endl;
}

std::string	WrongAnimal::getType(void) const { return (this->type); }

void	WrongAnimal::makeSound(void) const { std::cout << "WrongAnimal sound" << std::endl; }
