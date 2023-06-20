/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:59:49 by llion             #+#    #+#             */
/*   Updated: 2023/06/19 18:18:09 by llion            ###   ########.fr       */
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
		std::ofstream newFile(std::string(argv[1]) + ".replace");
		std::string word;
		std::cout << ollivander.rdbuf() << std::endl;
		if (ollivander) {
			while (ollivander >> word)
				if (word == argv[2]) {
					word = argv[3];
				}
				newFile << word << " ";
				ollivander.close();
				newFile.close();
		}
		else
			std::cout << "Error: Fatal" << std::endl;
	}
	else
		std::cout << "Format error: <file> <stringToReplace> <newString>" << std::endl;
	return (0);
}
