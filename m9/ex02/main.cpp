/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/25 13:08:48 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char **argv ) {

	PmergeMe merge;
	std::vector<int> array;

	if (argc == 2) {
		array = merge.split(static_cast<std::string>(argv[1]));
		merge.merge_sort(array);
	}
	else
	 std::cout << "Syntax error: ./PmergeSort <input>" << std::endl;
	return (0);
}
