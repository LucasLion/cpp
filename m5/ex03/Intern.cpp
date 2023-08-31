/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:24:08 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 12:06:07 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>

Intern::Intern( void ) {
	std::cout << G << "Intern default constructor called" << RE << std::endl;
}

Intern::Intern( const Intern& src ) {
	(void)src;
	std::cout << G << "Intern copy constructor called" << RE << std::endl;
}

Intern& Intern::operator=( const Intern& src ) {
	(void)src;
	std::cout << G << "Assignation operator called" << RE << std::endl;
	return (*this);
}

Intern::~Intern( void ) {
	std::cout << R << "Intern destructor called" << RE << std::endl;
}

static AForm*	createRoboForm( std::string target ) {
	AForm*	robotomyForm = new RobotomyRequestForm(target);
	return (robotomyForm);
}

static AForm*	createPresForm( std::string target ) {
	AForm*	presForm = new RobotomyRequestForm(target);
	return (presForm);
}

static AForm*	createShrubForm( std::string target ) {
	AForm*	shrubberyForm = new RobotomyRequestForm(target);
	return (shrubberyForm);
}

AForm*	Intern::makeForm( std::string formName, std::string target ) { 
	AForm*	(*f[3])(std::string target) = {createRoboForm, createShrubForm, createPresForm};
	std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery"};
	AForm*	toMake = NULL;
	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i])
			toMake = f[i](target);
	}
	try {
		if (!toMake)
			throw Intern::formNotFoundException();
		std::cout << Y << "Intern created \"" << formName << "\" form" << RE << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (toMake);
}

const char*	Intern::formNotFoundException::what( void ) const throw( ) {
	return ("\e[4;1;31mForm doesn't exists!\e[0m");
}
