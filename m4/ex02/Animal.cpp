/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:11:24 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 16:31:18 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal") {
	std::cout << G << "AAnimal default constructor called" << RE << std::endl;
}

AAnimal::AAnimal( const AAnimal& src ) {
	std::cout << G << "AAnimal copy constructor called" << RE << std::endl;
	*this = src;
}

AAnimal&	AAnimal::operator=( const AAnimal& src ) {
	std::cout << G << "AAnimal assignation operator called" << RE << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

AAnimal::~AAnimal(void) {
	std::cout << R << "AAnimal destructor called" << RE << std::endl;
}

std::string	AAnimal::getType(void) const { return (this->type); }

void	AAnimal::makeSound(void) const { std::cout << "AAnimal sound" << std::endl; }
