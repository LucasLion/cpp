/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:04:38 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 19:57:21 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( ) : Animal() {
	std::cout << G << "Cat default constructor called" << RE << std::endl;
}

Cat::Cat( const Cat& src ) : Animal() {
	std::cout << G << "Cat copy constructor called" << RE << std::endl;
	*this = src;
}

Cat&	Cat::operator=( const Cat& src ) {
	std::cout << G << "Cat assignation operator called" << RE << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cat::~Cat( ) {
	std::cout << R << "Cat destructor called" << RE << std::endl;
}

void	Cat::makeSound( ) const {
	std::cout << "Miaouuuu" << std::endl;
}
