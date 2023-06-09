/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:01:07 by llion             #+#    #+#             */
/*   Updated: 2023/05/06 01:05:11 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	else {
		for (int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j]; j++)
			{
				argv[i][j] = toupper(argv[i][j]);
				std::cout << argv[i][j];
			}
		std::cout << std::endl;
	}
	return (0);
}
