/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:41:02 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/29 16:13:34 by llion@student    ###   ########.fr       */
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

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._book[i])
			this->_book[i] = (src._book[i])->clone();
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
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
	std::cout << "MarteriaSource operator= called" << std::endl;
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

//possibles imprecisions ici
AMateria*	MateriaSource::createMateria( const std::string& type ) {
	int i = 0;
	while (this->_book[i] && i <= 4) {
		if (this->_book[i]->getType() == type) {
			std::cout << type << " Materia created ! " << std::endl;
			return (this->_book[i]->clone());
		}
		i++;
	}
	std::cout << Y << "Materia unknowned" << RE << std::endl;
	return (NULL);
}
