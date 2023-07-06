/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:00:49 by llion             #+#    #+#             */
/*   Updated: 2023/07/06 16:04:48 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int main(int argc, char **argv) {
	HarlFilter harlFilter;
	if (argc == 2) {
		harlFilter.complain(argv[1]);	
	}
	else
		std::cout << "Format error: syntax: ./HarlFilter <level>" << std::endl;
	return (0);
}
