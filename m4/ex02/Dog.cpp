/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:03:03 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 16:31:58 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"

Dog::Dog( ) : AAnimal() {
	std::cout << G << "Dog default constructor called" << RE << std::endl;
	this->setType("Dog");
	brain = new Brain;
}

Dog::Dog( const Dog& src ) : AAnimal() {
	std::cout << G << "Dog copy constructor called" << RE << std::endl;
	*this = src;
}

Dog&	Dog::operator=( const Dog& src ) {
	std::cout << G << "Dog assignation operator called" << RE << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Dog::~Dog( ) {
	delete brain;
	std::cout << R << "Dog destructor called" << RE << std::endl;
}

void	Dog::makeSound( ) const {
	std::cout << "Wouf wouf" << std::endl;
}

void	Dog::setType( std::string type ) { this->type = type; }
