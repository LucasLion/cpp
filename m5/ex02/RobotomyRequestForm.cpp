/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:30:26 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 12:29:14 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <cstdlib>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("Robotomy form", false, 72, 45), _target("default") {
	std::cout << G << "RobotomyRequestForm default constructor called" << RE << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("Shrubbery form", false, 72, 45), _target(target) {
	std::cout << G << "RobotomyRequestForm default constructor called" << RE << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& src ) : AForm(src.getName(), src.getSigned(), src.getGradeToSign(), src.getGradeToExec()) {
	std::cout << G << "RobotomyRequestForm copy constructor called" << RE << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& src ) {
	std::cout << G << "RobotomyRequestForm assignation operator called" << RE << std::endl;
	if (this != &src) {
		this->_target = src._target;
		this->setSigned(src.getSigned());
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << R << "RobotomyRequestForm destructor called" << RE << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw AForm::formNotSignedException();
	if (this->getGradeToExec() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "******* Makes drill noises *******" << RE << std::endl;
	int n = rand() % 100;
	if (n % 2 == 0)
		std::cout << this->_target << " was robotomized! " << G << "✓" << RE << std::endl;
	else
		std::cout << "Operation failed... " << R << "❌" << RE << std::endl;

}
