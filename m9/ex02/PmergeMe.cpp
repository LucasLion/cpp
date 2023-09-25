/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:06:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/25 14:53:42 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe( void ) { }

PmergeMe::~PmergeMe( void ) { }

PmergeMe::PmergeMe( const PmergeMe& rhs ) {
	*this = rhs;
}

PmergeMe&	PmergeMe::operator=( const PmergeMe& rhs ) {
	if (this != &rhs) { }
	return (*this);
}

std::vector<int>	PmergeMe::split( std::string str ) {

	std::istringstream	iss(str);
	std::vector<int>	s;
	std::string			token;
	
	while (iss >> token)
		s.push_back(atoi(token.c_str()));
	return (s);
}

std::vector<int>	PmergeMe::merge( std::vector<int> vec, int a, int b) {
	(void)a;
	(void)b;
	return (vec);
}

std::vector<int>	PmergeMe::merge_sort( std::vector<int> array ) {
	
	int							i;
	int							len = array.size();
	int							mid = len / 2;
	std::vector<int>			winners;
	std::vector<int>			left(array.begin(), array.begin() + mid);
	std::vector<int>			right(array.begin() + mid, array.end());
	std::vector<int>::iterator	it;

	if (len > 2) {
		for (i = 0; i < len /2; i++) {
			left.push_back(array[i]);
		}
		for (i = len/2; i < len; i++) {
			right.push_back(array[i]);
		}
		merge_sort(left);
		merge_sort(right);
		printVec(left);
		printVec(right);
		std::cout << std::endl;
		if (left.size() == 2) {
			if (left[0] > left[1]) {
				winners.push_back(left[0]);
			} else
				winners.push_back(left[1]);
		}
		
	} else {
		return (array);
	}
	printVec(winners);
	return (merge(left, left[0], left[1]));
}

void	PmergeMe::printVec( std::vector<int> storage ) {

	std::vector<int>::iterator	it;

	std::cout << "Vector: ";
	for (it = storage.begin(); it != storage.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
