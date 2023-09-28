/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/28 14:29:55 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>

int main( int argc, char **argv ) {

	PmergeMe merge;
	std::vector<unsigned int> vector;
	std::list<unsigned int> list;


	if (argc > 1) {
		try {
			for (int i = 1; i < argc; i++)
				if (std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
					throw PmergeMe::NotANumberException();

			// Vector
			vector = merge.VecSplitString(argc, argv);
			std::cout << "Before: "; merge.printVec(vector);
			std::clock_t vecStart = std::clock();
			vector = merge.VecMergeSort(vector);
			double duration = (std::clock() - vecStart) / static_cast<double>(CLOCKS_PER_SEC) * 1000000;
			std::cout << "After: "; merge.printVec(vector);
			std::cout << "Time to process a range of " << argc - 1 << " elements " << "with std::vector<unsigned int> : " << duration << " µs" << std::endl;

			// list
			list = merge.ListSplitString(argc, argv);
			std::clock_t listStart = std::clock();
			list = merge.ListMergeSort(list);
			double lduration = (std::clock() - listStart) / static_cast<double>(CLOCKS_PER_SEC) * 1000000;
			std::cout << "Time to process a range of " << argc - 1 << " elements " << "with std::list<unsigned int> : " << lduration << " µs" << std::endl;

		} catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	else
	 std::cout << "Syntax error: ./PmergeSort <input>" << std::endl;
	return (0);
}
