/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:06:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/25 15:06:48 by llion@student    ###   ########.fr       */
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

	if (len > 2) {
		for (i = 0; i < len /2; i++) {
			left.push_back(array[i]);
		}
		for (i = len/2; i < len; i++) {
			right.push_back(array[i]);
		}
		merge_sort(left);
		merge_sort(right);
		//printVec(left);
		//printVec(right);
		std::cout << std::endl;
		
	}
	//printVec(winners);
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
