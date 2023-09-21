/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:06:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/21 17:13:01 by llion@student    ###   ########.fr       */
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

std::vector<int>	PmergeMe::sort( char **argv ) {

	std::istringstream	iss(argv[1]);
	std::string	token;
	std::vector<int> storage;

	while (std::getline(iss, token, ' ')) {
		storage.push_back(atoi(token.c_str()));
	}
	return (storage);
}


void	PmergeMe::printVec( std::vector<int> storage ) {

	std::vector<int>::iterator	it;

	for (it = storage.begin(); it != storage.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
