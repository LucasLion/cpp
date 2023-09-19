/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/19 16:11:24 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int argc, char* argv[] ) {

	if (argc == 2) {
		BitcoinExchange btc;

		std::map< std::string, std::string > input = btc.getInput();
		btc.fillInput(input, argv);	
		std::map< std::string, std::string >::iterator it;
		std::cout << std::endl;
		bool first = true;
		for (it = input.begin(); it != input.end(); it++) {
			std::cout << "it: " << it->first << std::endl;
			if (!first)
				btc.dateParser(it->first);
			else
			 first = false;
		}
	}
	else
		std::cout << "Syntax error: ./btc <input file>" << std::endl;
	return (0);

}
