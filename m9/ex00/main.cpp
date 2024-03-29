/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/20 12:39:22 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int argc, char* argv[] ) {

	if (argc == 2) {
		BitcoinExchange btc;
		try {
			btc.convert(argv);	
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	else 
		std::cout << "Syntax error: ./btc <input file>" << std::endl;
	return (0);

}
