/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:56:49 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 16:05:02 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain( void ) {
	std::cout << G << "Brain default constructor called" << RE << std::endl;
}

Brain::Brain( const Brain& src ) {
	std::cout << G << "Brain copy constructor called" << RE << std::endl;
	if (this != &src)
		for (int i = 0; i < 100; i++)
			std::copy(src.ideas[i].begin(), src.ideas[i].end(), this->ideas->begin());
}


Brain&	Brain::operator=( const Brain& src ) {
	std::cout << G << "Brain assignation operator called" << RE << std::endl;
	if (this != &src)
		for (int i = 0; i < 100; i++)
			std::copy(src.ideas[i].begin(), src.ideas[i].end(), this->ideas->begin());
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << R << "Brain destructor called" << RE << std::endl;
}

void	Brain::setIdea( int index ) {
	std::stringstream ss;
	ss << index;
	this->ideas[index] = "idea " + ss.str();
}

std::string	Brain::getIdea( int index ) const {
	return (this->ideas[index]);
}
