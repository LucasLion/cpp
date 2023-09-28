/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:06:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/28 14:33:45 by llion@student    ###   ########.fr       */
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

std::vector<unsigned int>	PmergeMe::VecSplitString( int argc, char** argv ) {

	std::vector<unsigned int>	s;
	
	for (int i = 1; i < argc; i++) {
		std::istringstream iss(argv[i]);
		unsigned int x;
		iss >> x;
		s.push_back(x);
	}
	return (s);
}

std::vector<unsigned int>	PmergeMe::VecMerge( std::vector<unsigned int> left, std::vector<unsigned int> right ) {
	
	std::vector<unsigned int>	tank;

	while (!left.empty() && !right.empty()) {
		if (left.front() < right.front()) {
			tank.push_back(left.front());
			left.erase(left.begin());
		}
		else {
			tank.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty()) {
		tank.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty()) {
		tank.push_back(right.front());
		right.erase(right.begin());
	}
	return (tank);
}

std::vector<unsigned int>	PmergeMe::VecMergeSort( std::vector<unsigned int> array ) {
	
	int									len = array.size();
	int									mid = len / 2;
	std::vector<int>					winners;
	std::vector<unsigned int>			left(array.begin(), array.begin() + mid);
	std::vector<unsigned int>			right(array.begin() + mid, array.end());

	if (array.size() <= 1)
		return (array);
	left = VecMergeSort(left);
	right = VecMergeSort(right);
	return (VecMerge(left, right));
}

void	PmergeMe::printVec( std::vector<unsigned int> tank ) {

	std::vector<unsigned int>::iterator	it;

	for (it = tank.begin(); it != tank.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

std::list<unsigned int>	PmergeMe::ListSplitString( int argc, char** argv ) {

	std::list<unsigned int>	s;
	
	for (int i = 1; i < argc; i++) {
		std::istringstream iss(argv[i]);
		unsigned int x;
		iss >> x;
		s.push_back(x);
	}
	return (s);
}

std::list<unsigned int>	PmergeMe::ListMerge( std::list<unsigned int> left, std::list<unsigned int> right ) {
	
	std::list<unsigned int>	tank;

	while (!left.empty() && !right.empty()) {
		if (left.front() < right.front()) {
			tank.push_back(left.front());
			left.erase(left.begin());
		}
		else {
			tank.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty()) {
		tank.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty()) {
		tank.push_back(right.front());
		right.erase(right.begin());
	}
	return (tank);
}

std::list<unsigned int>	PmergeMe::ListMergeSort( std::list<unsigned int> array ) {
	
	int									len = array.size();
	int									mid = len / 2;
	std::list<unsigned int>				left;
	std::list<unsigned int>				right;

	if (array.size() <= 1)
		return (array);

	for (int i = 0; i < mid; i++) {
		left.push_back(array.front());
		array.pop_front();
	}
	right = array;
	left = ListMergeSort(left);
	right = ListMergeSort(right);
	return (ListMerge(left, right));
	return (array);
}

void	PmergeMe::printList( std::list<unsigned int> tank ) {

	std::list<unsigned int>::iterator	it;

	for (it = tank.begin(); it != tank.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
