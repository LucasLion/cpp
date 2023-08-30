/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:34:12 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/30 23:14:19 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <exception>
#include <ostream>

Bureaucrat::Bureaucrat( void ) : _name("default") {
	std::cout << G << "Bureaucrat default constructor called" << RE << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {
	std::cout << G << "Bureaucrat default constructor called" << RE << std::endl;
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
	this->_name = src.getName();
	if (src._grade)
		this->_grade = src.getGrade();
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
	try {
		this->_grade -= 1;
		if (this->_grade < 1) 
			throw Bureaucrat::GradeTooHighException();
		}
	catch(const std::exception& e) {
			this->_grade = 1;
			std::cout << e.what() << std::endl;
		}
}

void	Bureaucrat::decrement( void ) {
	try {
		this->_grade += 1;
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooHighException();
		}
	catch(const std::exception& e) {
			this->_grade = 150;
			std::cout << e.what() << std::endl;
		}
}

void	Bureaucrat::signForm( AForm& f ) {
	if (this->getGrade() >= f.getGradeToSign())
		std::cout << Y << this->_name << " couldn't sign " << f.getName() << " because his grade is too low." << RE << std::endl;
	else if (f.getSigned() == true)
		std::cout << Y << this->_name << " couldn't sign " << f.getName() << " because " << f.getName() << " is already signed" << RE << std::endl;

	else
		std::cout << Y << this->_name << " signed " << f.getName() << RE << std::endl;
}

void	Bureaucrat::executeForm( const AForm& f ) {
	try {
		f.execute(*this);
		std::cout << Y << this->_name << " executed " << f.getName() << RE << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}	
}

const char*	Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ("\e[4;1;31mGrade is too high!\e[0m");
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ("\e[4;1;31mGrade is too low!\e[0m");
}


std::ostream& operator<<( std::ostream& COUT, const Bureaucrat& b ) {
	COUT << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (COUT);
} 
