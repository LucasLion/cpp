/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:03:03 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 19:57:28 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( ) : Animal() {
	std::cout << G << "Dog default constructor called" << RE << std::endl;
}

Dog::Dog( const Dog& src ) : Animal() {
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
	std::cout << R << "Dog destructor called" << RE << std::endl;
}

void	Dog::makeSound( ) const {
	std::cout << "Wouf wouf" << std::endl;
}
