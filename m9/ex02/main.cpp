/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/21 17:12:29 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char **argv ) {

	PmergeMe merge;
	std::vector<int> storage;

	if (argc == 2) {
		storage = merge.sort(argv);
		merge.printVec(storage);
	}
	else
	 std::cout << "Syntax error: ./PmergeSort <input>" << std::endl;
	return (0);
}
