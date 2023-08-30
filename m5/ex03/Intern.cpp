/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:24:08 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/30 22:47:27 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern( const Intern& src ) {
	(void)src;
	std::cout << "Intern default constructor called" << std::endl;
}

Intern& Intern::operator=( const Intern& src ) {
	(void)src;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

Intern::~Intern( void ) {
	std::cout << "Intern destructor called" << std::endl;
}

AForm*	Intern::makeForm( std::string formName, std::string target ) { 
	(void)target;
	std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery"};
	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i])
			std::cout << "Forn number: " << i << std::endl;
	}
	return (NULL);
}
