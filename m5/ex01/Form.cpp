/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:17:01 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/28 11:18:37 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ) : _gradeToExec(150), _gradeToSign(150) {
	std::cout << "default Form constructor called (grades at 150 both)" << std::endl;
}

Form::Form( const std::string name, const int gradeToSign, const int gradeToExec ) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << "Form constructor called" << std::endl;
}

Form::Form( const Form& src ) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExec(src.getGradeToExec()) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form( void ) {
	std::cout << "Form destructor called" << std::endl;
}

Form&	Form::operator=( const Form& src ) {
	std::cout << "Form assignation operator called" << std::endl;
	if (this != &src)
		*this = src;
	return (*this);
}

void	Form::setSigned( bool b ) {
	this->_signed = b;
}

const std::string	Form::getName( void ) const {
	return (this->_name);
}

bool	Form::getSigned( void ) {
	return (this->_signed);
}

int	Form::getGradeToSign( void ) const {
	return (this->_gradeToSign);
}

int	Form::getGradeToExec( void ) const {
	return (this->_gradeToExec);
}

void	Form::beSigned( const Bureaucrat& b ) {
}
