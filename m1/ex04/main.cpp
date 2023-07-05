/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:59:49 by llion             #+#    #+#             */
/*   Updated: 2023/07/05 15:35:30 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

void	replace_str(std::string line, std::size_t found) {
	
}

int main(int argc, char **argv) {
	if (argc == 4) {
		std::ifstream	olliv(argv[1]);
		std::ofstream	newFile(std::string(argv[1]) + ".replace");
		std::string		line;
		std::size_t		found;

		if (olliv) {
			while (std::getline(olliv, line)) {
				found = line.find(argv[2]);	
				while (found != std::string::npos) {
					std::cout << "word found at " << found << " line " << std::endl;
					replace_str(line, found);
					found = line.find(argv[2], found + 1);
				}
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
