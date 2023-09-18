/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:13:34 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/18 15:43:38 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <list>

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack< T, Container > {

public:
	
					MutantStack( void ) {};
					~MutantStack( void ) {};
					MutantStack( const MutantStack& rhs ) { *this = rhs; }
    MutantStack&    operator=( const MutantStack& rhs ) {
        std::stack< T, Container >::operator=( rhs );
        return *this;
    }
	typedef typename Container::iterator iterator;

	typename Container::iterator begin() {
		return (this->c.begin());
	}
	
	typename Container::iterator end() {
		return (this->c.end());
	}
};

