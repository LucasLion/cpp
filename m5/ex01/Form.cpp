/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:17:01 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 09:18:53 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ) : _name("default form"), _signed(0), _gradeToSign(150), _gradeToExec(150) {
	std::cout << G << "default Form constructor called (grades at 150 both)" << RE << std::endl;
}

Form::Form( const std::string name, int sign, const int gradeToSign, const int gradeToExec ) : _name(name), _signed(sign), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << G << "Form constructor called" << RE << std::endl;
}

Form::Form( const Form& src ) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExec(src.getGradeToExec()) {
	std::cout << G << "Form copy constructor called" << RE << std::endl;
}

Form::~Form( void ) {
	std::cout << R << "Form destructor called" << RE << std::endl;
}

Form&	Form::operator=( const Form& src ) {
	std::cout << "Form assignation operator called" << std::endl;
	this->_signed = src.getSigned();
	return (*this);
}

void	Form::setSigned( bool b ) {
	this->_signed = b;
}

const std::string	Form::getName( void ) const {
	return (this->_name);
}

bool	Form::getSigned( void ) const {
	return (this->_signed);
}

int	Form::getGradeToSign( void ) const {
	return (this->_gradeToSign);
}

int	Form::getGradeToExec( void ) const {
	return (this->_gradeToExec);
}

void	Form::beSigned( Bureaucrat& b ) {
	try {
		if (b.getGrade() > this->_gradeToSign)
			throw Form::GradeTooLowException();	
		this->_signed = true;
		b.signForm(*this);
	}
	catch (const std::exception&) {
		b.signForm(*this);
	}
}

const char*	Form::GradeTooLowException::what( void ) const throw() {
	return ("Grade is too low!");
}

std::ostream&	operator<<( std::ostream& COUT, Form& f ) {
	std::cout << "Form name: " << f.getName() << std::endl;
	std::cout << "Form grade to sign: " << f.getGradeToSign() << std::endl;
	std::cout << "Form grade to exec: " << f.getGradeToExec() << std::endl;
	std::cout << "Form signed: " << f.getSigned() << std::endl;
	return (COUT);	
}
