/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:59:49 by llion             #+#    #+#             */
/*   Updated: 2023/06/19 17:03:36 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

int main(int argc, char **argv)
{
	if (argc == 4) {
		std::ifstream ollivander(argv[1]);
		std::string word;
		if (ollivander) {
			while (ollivander >> word)
				if (word == argv[2]) {
					word = argv[3];
				}
		std::cout << ollivander.gcount() << std::endl;
			ollivander.seekg(0, ollivander.beg);
			std::cout << ollivander.rdbuf() << std::endl;
			ollivander.close();
		}
		else
			std::cout << "Error: Fatal" << std::endl;
	}
	else
		std::cout << "Format error: <file> <stringToReplace> <newString>" << std::endl;
	return (0);
}
