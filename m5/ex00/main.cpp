/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:46:53 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 13:50:55 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

	try {
		Bureaucrat john("John", 151);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}

	Bureaucrat	jeff("Jeff", 3);

	std::cout << "---incrementations---" << std::endl;
	std::cout << jeff.getGrade() << std::endl;
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	std::cout << "has to fail" << std::endl;
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	std::cout << "---decrementations---" << std::endl;
	for (int i = 0; i < 150; i++)
		jeff.decrement();
	std::cout << "has to fail" << std::endl;
	std::cout << jeff.getGrade() << std::endl;
	jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	return 0;
}
