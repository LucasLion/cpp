/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:46:53 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/28 13:41:17 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {
	Bureaucrat	jeff("Jeff", 3);

	std::cout << jeff.getGrade() << std::endl;
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	for (int i = 0; i < 50; i++)
		jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;

	Form form1 = Form("low_level_form", 0, 135, 50);
	Form form2 = Form("low_level_form_but_already signed", 1, 135, 50);
	Form form3 = Form("high_level_form", 0, 3, 50);
	std::cout << G << "jeff grade: " << jeff.getGrade() << RE << std::endl;

	std::cout << G << "low_level_form grade: " << form1.getGradeToSign() << RE << std::endl;
	std::cout << G << "low_level_form signed: " << form1.getSigned() << RE << std::endl;
	form1.beSigned(jeff);
	std::cout << G << "low_level_form_but_already_signed  grade: " << form2.getGradeToSign() << RE << std::endl;
	std::cout << G << "low_level_form_but_already_signed signed: " << form2.getSigned() << RE << std::endl;
	form2.beSigned(jeff);
	std::cout << G << "high_level_form grade: " << form3.getGradeToSign() << RE << std::endl;
	std::cout << G << "high_level_form signed: " << form3.getSigned() << RE << std::endl;
	form3.beSigned(jeff);
	return 0;
}
