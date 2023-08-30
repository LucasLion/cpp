/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:46:53 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/30 10:15:04 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ) {
	Bureaucrat jeff = Bureaucrat("jeff", 10);

	std::cout << "Jeff grade: " << jeff.getGrade() << std::endl;

	ShrubberyCreationForm form = ShrubberyCreationForm("house");

	std::cout << "Form name: " << form.getName() << std::endl;
	std::cout << "Form signed: " << form.getSigned() << std::endl;
	std::cout << "Form grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Form grade to exec: " << form.getGradeToExec() << std::endl;

	form.beSigned(jeff);

	std::cout << "Form name: " << form.getName() << std::endl;
	std::cout << "Form signed: " << form.getSigned() << std::endl;
	std::cout << "Form grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Form grade to exec: " << form.getGradeToExec() << std::endl;
	std::cout << "Form address: " << &form << std::endl;

	form.execute(jeff);

	ShrubberyCreationForm form2;

	form2 = form;
	std::cout << "Form2 name: " << form2.getName() << std::endl;
	std::cout << "Form2 signed: " << form2.getSigned() << std::endl;
	std::cout << "Form2 grade to sign: " << form2.getGradeToSign() << std::endl;
	std::cout << "Form2 grade to exec: " << form2.getGradeToExec() << std::endl;
	std::cout << "Form address: " << &form2 << std::endl;

	return (0);
}
