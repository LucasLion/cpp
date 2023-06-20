/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:59:49 by llion             #+#    #+#             */
/*   Updated: 2023/06/20 13:01:53 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

int main(int argc, char **argv)
{
	if (argc == 4) {
		std::ifstream	olliv(argv[1]);
		std::ofstream	newFile(std::string(argv[1]) + ".replace");
		std::string		line;

		if (olliv) {
			while (std::getline(olliv, line)) {
				if (word == argv[2]) {
					newFile << argv[3] << " ";
				}
				else
					newFile << word << " ";
			}
			olliv.close();
			newFile.close();
		}
		else
			std::cout << "Error: Fatal" << std::endl;
	}
	else
		std::cout << "Format error: <file> <stringToReplace> <newString>" << std::endl;
	return (0);
}
