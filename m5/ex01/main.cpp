/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:46:53 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 14:22:03 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {
	try {
		Bureaucrat john("John", 151);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}

	Bureaucrat	jeff("Jeff", 2);

	std::cout << "---incrementations---" << std::endl;
	std::cout << jeff.getGrade() << std::endl;
	try {
		jeff.increment();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << jeff.getGrade() << std::endl;
	try {
		jeff.increment();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << jeff.getGrade() << std::endl;
	std::cout << "has to fail" << std::endl;
	try {
		jeff.increment();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << jeff.getGrade() << std::endl;
	try {
		jeff.increment();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << jeff.getGrade() << std::endl;
	try {
		jeff.increment();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << jeff.getGrade() << std::endl;
	std::cout << "---decrementations---" << std::endl;
	for (int i = 0; i < 150; i++) {
		try {
			jeff.decrement();
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;	
		}
		std::cout << jeff.getGrade() << std::endl;
	}
	std::cout << "has to fail" << std::endl;
	std::cout << jeff.getGrade() << std::endl;
	try {
		jeff.decrement();
	}	
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << jeff.getGrade() << std::endl;
	try {
		jeff.decrement();
	}	
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << jeff.getGrade() << std::endl;
	try {
		jeff.decrement();
	}	
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << jeff.getGrade() << std::endl;

	Form form1 = Form("low_level_form", 0, 135, 50);
	Form form2 = Form("low_level_form_but_already signed", 1, 135, 50);
	Form form3 = Form("high_level_form", 0, 3, 50);
	std::cout << "jeff grade: " << jeff.getGrade()  << std::endl;

	std::cout << "low_level_form grade: " << form1.getGradeToSign()  << std::endl;
	std::cout << "low_level_form signed: " << form1.getSigned()  << std::endl;
	jeff.signForm(form1);
	std::cout << "low_level_form_but_already_signed  grade: " << form2.getGradeToSign()  << std::endl;
	std::cout << "low_level_form_but_already_signed signed: " << form2.getSigned()  << std::endl;
	jeff.signForm(form2);
	std::cout << "high_level_form grade: " << form3.getGradeToSign()  << std::endl;
	std::cout << "high_level_form signed: " << form3.getSigned()  << std::endl;
	jeff.signForm(form3);
	return 0;
}
