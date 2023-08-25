/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:41:02 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/25 12:44:39 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource() {
	std::cout << "MateriaSource created" << std::endl;
	for(int i = 0; i < 4; i++)
		this->_book[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& src ) : IMateriaSource() {
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
	for(int i = 0; i < 4; i++)
	{
		if (this->_book[i])
			delete this->_book[i];
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
	std::cout << "New Materia learned" << std::endl;
	this->_book[i] = m;
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
