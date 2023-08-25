/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:46:53 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/25 16:04:03 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	jeff.increment();
	std::cout << jeff.getGrade() << std::endl;
	for (int i = 0; i < 150; i++)
		jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	jeff.decrement();
	std::cout << jeff.getGrade() << std::endl;
	return 0;
}
