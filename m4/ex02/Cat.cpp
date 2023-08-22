/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:04:38 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 16:31:43 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include <algorithm>

Cat::Cat( ) : AAnimal() {
	std::cout << G << "Cat default constructor called" << RE << std::endl;
	this->setType("Cat");
	brain = new Brain();
}

Cat::Cat( const Cat& src ) : AAnimal() {
	std::cout << G << "Cat copy constructor called" << RE << std::endl;
	*this = src;
	this->brain = new Brain();
	this->brain = src.brain;
}

Cat&	Cat::operator=( const Cat& src ) {
	std::cout << G << "Cat assignation operator called" << RE << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cat::~Cat( ) {
	delete brain;
	std::cout << R << "Cat destructor called" << RE << std::endl;
}

void	Cat::makeSound( ) const {
	std::cout << "Miaouuuu" << std::endl;
}

void	Cat::setType( std::string type ) { this->type = type; }
