/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:10:14 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 18:22:30 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void ) {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "L’adresse de la string en mémoire: " << &str << std::endl;
	std::cout << "L’adresse stockée dans stringPTR: " << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "La valeur de la string: " << str << std::endl;
	std::cout << "La valeur pointée par stringPTR: " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF: " << stringREF << std::endl;
}
