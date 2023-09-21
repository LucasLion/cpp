/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:04:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/21 16:58:39 by llion@student    ###   ########.fr       */
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

class PmergeMe {

public:
						PmergeMe( void );
						~PmergeMe( void );
						PmergeMe( const PmergeMe& rhs );
	PmergeMe&			operator=( const PmergeMe& rhs );
	std::vector<int>	sort( char **argv );
	void				printVec( std::vector<int> );

private:

};
