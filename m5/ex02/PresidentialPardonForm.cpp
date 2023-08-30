/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:30:26 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/30 22:08:04 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("Presidential form", 0, 25, 5), _target("default target") {
	std::cout << G << "PresidentialPardonForm default constructor called" << RE << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("Shrubbery form", 0, 25, 5), _target(target) {
	std::cout << G << "PresidentialPardonForm default constructor called" << RE << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& src ) : AForm(src.getName(), src.getSigned(), src.getGradeToSign(), src.getGradeToExec()) {
	std::cout << G << "PresidentialPardonForm copy constructor called" << RE << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& src ) {
	std::cout << G << "PresidentialPardonForm assignation operator called" << RE << std::endl;
	if (this != &src) {
		this->_target = src._target;
		this->setSigned(src.getSigned());
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << R << "PresidentialPardonForm destructor called" << RE << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw AForm::formNotSignedException();
	if (this->getGradeToExec() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->_target << " was forgiven by Zaphod Beeblebrox" << std::endl;
}
