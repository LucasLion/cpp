/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:17:01 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/30 20:41:16 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( void ) : _name("default form"), _signed(0), _gradeToSign(150), _gradeToExec(150) {
	std::cout << G << "default AForm constructor called (grades at 150 both)" << RE << std::endl;
}

AForm::AForm( const std::string name, int sign, const int gradeToSign, const int gradeToExec ) : _name(name), _signed(sign), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << G << "AForm constructor called" << RE << std::endl;
}

AForm::AForm( const AForm& src ) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExec(src.getGradeToExec()) {
	std::cout << G << "AForm copy constructor called" << RE << std::endl;
}

AForm::~AForm( void ) {
	std::cout << R << "AForm destructor called" << RE << std::endl;
}

AForm&	AForm::operator=( const AForm& src ) {
	std::cout << "AForm assignation operator called" << std::endl;
	if (this != &src)
		*this = src;
	return (*this);
}

void	AForm::setSigned( bool b ) {
	this->_signed = b;
}

const std::string	AForm::getName( void ) const {
	return (this->_name);
}

bool	AForm::getSigned( void ) const {
	return (this->_signed);
}

int	AForm::getGradeToSign( void ) const {
	return (this->_gradeToSign);
}

int	AForm::getGradeToExec( void ) const {
	return (this->_gradeToExec);
}

void	AForm::beSigned( Bureaucrat& b ) {
	try {
		if (this->_signed == 1) {
			throw AForm::alreadySignedException();
		}
		else if (b.getGrade() > this->_gradeToSign)
			throw AForm::GradeTooLowException();	
		this->_signed = true;
		b.signForm(*this);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

const char*	AForm::GradeTooLowException::what( void ) const throw() {
	return ("\e[4;1;31mGrade is too low!\e[0m");
}

const char*	AForm::formNotSignedException::what( void ) const throw() {
	return ("\e[4;1;31mForm is not signed!\e[0m");
}

const char*	AForm::alreadySignedException::what( void ) const throw() {
	return ("\e[4;1;31mForm is already signed!\e[0m");
}

std::ostream&	operator<<( std::ostream& COUT, AForm& f ) {
	std::cout << "AForm name: " << f.getName() << std::endl;
	std::cout << "AForm grade to sign: " << f.getGradeToSign() << std::endl;
	std::cout << "AForm grade to exec: " << f.getGradeToExec() << std::endl;
	std::cout << "AForm signed: " << f.getSigned() << std::endl;
	return (COUT);	
}
