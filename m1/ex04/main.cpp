/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:59:49 by llion             #+#    #+#             */
/*   Updated: 2023/07/06 16:03:41 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <string.h>

std::string	replace_str(std::string line, std::size_t found, int size, char **argv) {
	line.erase(found, size);
	line.insert(found, argv[3]);
	return (line);
}

int main(int argc, char **argv) {
	if (argc == 4) {
		std::ifstream	olliv(argv[1]);
		std::ofstream	newFile(std::string(argv[1]) + ".replace");
		std::string		line;
		std::string		arg(argv[2]);
		std::size_t		found;

		if (olliv) {
			while (std::getline(olliv, line)) {
				found = line.find(argv[2]);	
				while (found != std::string::npos) {
					std::cout << "word found at " << found << " line " << std::endl;
					line = replace_str(line, found, arg.size(), argv);
					found = line.find(argv[2], found + 1);
				}
				newFile << line << std::endl;
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
