/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:34:12 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 14:32:36 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <exception>
#include <ostream>

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(150) {
	std::cout << G << "Bureaucrat default constructor called" << RE << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else {
		this->_grade = grade;
		std::cout << G << "Bureaucrat constructor called" << RE << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat& src ) {
	std::cout << G << "Bureaucrat copy constructor called" << RE << std::endl;
	this->_grade = src.getGrade();
	this->_name = src.getName();
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << R << "Bureaucrat destructor called" << RE << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& src ) {
	std::cout << G << "Bureaucrat assignation constructor called" << RE << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		if (src._grade)
			this->_grade = src.getGrade();
	}
	return (*this);
}

std::string	Bureaucrat::getName( void ) const {
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void	Bureaucrat::setName( std::string name ) {
	this->_name = name;
}

void	Bureaucrat::setGrade( int grade ) {
	this->_grade = grade;
}

void	Bureaucrat::increment( void ) {
	if (this->_grade <= 1) 
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decrement( void ) {
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

void	Bureaucrat::signForm( AForm& f ) {
	try {
		f.beSigned(*this);
		std::cout << Y << this->_name << " signed " << f.getName() << RE << std::endl;
	}
	catch ( std::exception& e ) {
		std::cout << this->_name << " couldn't sign because " << e.what() << std::endl;		
	}
}

void	Bureaucrat::executeForm( const AForm& f ) {
	try {
		f.execute(*this);
		std::cout << Y << this->_name << " executed " << f.getName() << RE << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << this->_name << " couldn't execute form because " << e.what() << std::endl;		
	}	
}

const char*	Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ("\e[4;1;31mGrade is too high!\e[0m");
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ("\e[4;1;31mGrade is too low!\e[0m");
}


std::ostream& operator<<( std::ostream& COUT, const Bureaucrat& b ) {
	COUT << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (COUT);
} 
