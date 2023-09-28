/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:04:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/28 14:19:33 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <stdlib.h>
#include <vector>
#include <list>
#include <ctime>

class PmergeMe {

public:
								PmergeMe( void );
								~PmergeMe( void );
								PmergeMe( const PmergeMe& rhs );
	PmergeMe&					operator=( const PmergeMe& rhs );

	std::vector<unsigned int>	VecSplitString( int argc, char** argv );
	std::vector<unsigned int>	VecMerge( std::vector<unsigned int> left, std::vector<unsigned int> right );
	std::vector<unsigned int>	VecMergeSort( std::vector<unsigned int> array );
	void						printVec( std::vector<unsigned int> );

	std::list<unsigned int>		ListSplitString( int argc, char** argv );
	std::list<unsigned int>		ListMerge( std::list<unsigned int> left, std::list<unsigned int> right );
	std::list<unsigned int>		ListMergeSort( std::list<unsigned int> array );
	void						printList( std::list<unsigned int> );

	class NotANumberException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Error: input must be positive integers");
			}
	};

private:

};
