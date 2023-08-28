/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:34:12 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/28 11:19:41 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <ostream>

Bureaucrat::Bureaucrat( void ) : _name("default") {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& src ) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	this->_grade = src.getGrade();
	this->_name = src.getName();
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat destructor called" << std::endl;
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
	try
		{
			this->_grade -= 1;
			if (this->_grade < 1) 
				throw Bureaucrat::GradeTooHighException();
		}
	catch(const std::exception& e)
		{
			this->_grade = 1;
			std::cout << e.what() << std::endl;
		}
}

void	Bureaucrat::decrement( void ) {
	try
		{
			this->_grade += 1;
			if (this->_grade > 150)
				throw Bureaucrat::GradeTooHighException();
		}
	catch(const std::exception& e)
		{
			this->_grade = 150;
			std::cout << e.what() << std::endl;
		}
}

const char*	Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ("Grade is too high!");
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ("Grade is too low!");
}

void	Bureaucrat::signForm( Form& f ) {
	(void)f;
}

std::ostream& operator<<( std::ostream& COUT, const Bureaucrat& b ) {
	COUT << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (COUT);
} 
