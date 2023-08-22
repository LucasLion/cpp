/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:11:24 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 13:05:08 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal") {
	std::cout << G << "Animal default constructor called" << RE << std::endl;
}

Animal::Animal( const Animal& src ) {
	std::cout << G << "Animal copy constructor called" << RE << std::endl;
	*this = src;
}

Animal&	Animal::operator=( const Animal& src ) {
	std::cout << G << "Animal assignation operator called" << RE << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << R << "Animal destructor called" << RE << std::endl;
}

std::string	Animal::getType(void) const { return (this->type); }

void	Animal::makeSound(void) const { std::cout << "Animal sound" << std::endl; }
