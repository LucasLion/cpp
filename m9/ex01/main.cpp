/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/20 16:33:12 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char* argv[] ) {

	if (argc == 2) {
		RPN rpn;
	
		try {
			rpn.calculate(argv);
		} catch (std::exception& e) {
			std::cout << "Error" << std::endl;
		}
	}
	else
		std::cout << "Syntax error: ./RPN <input>" << std::endl;
	return (0);
}
