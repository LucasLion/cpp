/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:46:53 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 14:34:36 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ) {
	Bureaucrat jerry = Bureaucrat("jerry", 149);
	Bureaucrat ceo = Bureaucrat("CEO", 3);

	ShrubberyCreationForm form = ShrubberyCreationForm("house");
	ShrubberyCreationForm form2;
	form2 = form;
	
	std::cout << "|------------- SHRU ------------|" << std::endl;
	std::cout << "Form name: " << form.getName() << std::endl;
	std::cout << "Form signed: " << form.getSigned() << std::endl;
	std::cout << "Form grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Form grade to exec: " << form.getGradeToExec() << std::endl;

	jerry.signForm(form2);
	jerry.signForm(form2);
	ceo.signForm(form2);
	ceo.signForm(form2);
	ceo.executeForm(form2);

	std::cout << "|------------- ROBO ------------|" << std::endl;
	RobotomyRequestForm form3("robot target");

	jerry.executeForm(form3);
	jerry.signForm(form3);
	jerry.signForm(form3);
	ceo.signForm(form3);
	ceo.signForm(form3);
	for (int i = 0; i < 10; i++)
		jerry.executeForm(form3);
	for (int i = 0; i < 10; i++)
		ceo.executeForm(form3);

	std::cout << "|------------- PRES ------------|" << std::endl;
	PresidentialPardonForm form4("Ali Bongo");

	jerry.executeForm(form4);
	ceo.signForm(form4);
	jerry.signForm(form4);
	ceo.executeForm(form4);

	return (0);
}
