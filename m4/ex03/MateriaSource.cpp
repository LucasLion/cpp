/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:41:02 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/24 18:19:15 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << "MateriaSource created" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& src ) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource & MateriaSource::operator=(const MateriaSource& src)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_book[i])
			delete this->_book[i];
		if (src._book[i])
			this->_book[i] = (src._book[i])->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource destructor called" << std::endl;
}

// TODO 
// getType segfault ici

void	MateriaSource::displayBook( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->_book[i])
			std::cout << "Slot " << i << ": " << this->_book[i]->getType() << std::endl;
		else
			std::cout << "Slot " << i << ": Empty" << std::endl;
	}
}

void	MateriaSource::learnMateria( AMateria* m ) {
	int	i = 0;

	while (this->_book[i] && i < 4)
		i++;
	if (i >= 4) {
		std::cout << "Book full" << std::endl;
		return ;
	}
	this->_book[i] = m;
	std::cout << "New Materia learned" << std::endl;
}

AMateria*	MateriaSource::createMateria( const std::string& type ) {
	int i = 0;
	while (this->_book[i] && i <= 4 && type != this->_book[i]->getType())
		i++;
	if (i >= 4) {
		std::cout << Y << "Materia unknowned" << std::endl;
		return (NULL);
	}
	std::cout << type << " Materia created ! " << std::endl;
	return (this->_book[i]->clone());
}
