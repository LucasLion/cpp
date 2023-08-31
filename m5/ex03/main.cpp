/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:46:53 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 14:39:16 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <cmath>
#include <cstdlib>

int main( void ) {
	Bureaucrat jerry = Bureaucrat("jerry", 149);
	Bureaucrat ceo = Bureaucrat("CEO", 3);

	ShrubberyCreationForm form = ShrubberyCreationForm("house");
	ShrubberyCreationForm form2;
	std::cout << "|------------- SHRU ------------|" << std::endl;
	std::cout << "form2: " << form2.getName() << std::endl;
	std::cout << "form2 signed: " << form2.getSigned() << std::endl;
	std::cout << "form2 grade to sign: " << form2.getGradeToSign() << std::endl;
	std::cout << "form2 grade to exec: " << form2.getGradeToExec() << std::endl;
	std::cout <<"address: " << &form << std::endl;
	std::cout <<"address: " << &form2<< std::endl;
	std::cout << "form2 target: " << form2._target << std::endl; 

	form.setSigned(true);
	std::cout << "form2: " << form2.getName() << std::endl;
	std::cout << "form2 signed: " << form2.getSigned() << std::endl;
	std::cout << "form2 grade to sign: " << form2.getGradeToSign() << std::endl;
	std::cout << "form2 grade to exec: " << form2.getGradeToExec() << std::endl;
	std::cout <<"address: " << &form << std::endl;
	std::cout <<"address: " << &form2<< std::endl;
	std::cout << "|------------- SHRU ------------|" << std::endl;
	
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

	std::cout << "|------------- INTERN ------------|" << std::endl;
	Intern randomIntern;

	
	AForm* form5 = randomIntern.makeForm("prsidential pardon", "obama");
	AForm* form6 = randomIntern.makeForm("robotomy request", "obama");
	AForm* form7 = randomIntern.makeForm("shrubbery", "obama");

	static_cast<void>(form5);

	ceo.signForm(*form6);
	ceo.signForm(*form7);

	jerry.signForm(*form7);
	ceo.signForm(*form7);
	jerry.executeForm(*form7);
	ceo.executeForm(*form7);
	ceo.executeForm(*form7);
	delete form6;
	delete form7;

	try {
		Bureaucrat john = Bureaucrat("jerry", 1243);
	}
	catch (std::exception& e) {
		std::cout << "Couldn't create bureaucrat because " << e.what() << std::endl;		
	}
	return (0);
}
