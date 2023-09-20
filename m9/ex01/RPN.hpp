/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:04:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/20 15:47:02 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <stack>
#include <stdlib.h>

class RPN {

public:
			RPN( void );
			~RPN( void );
			RPN( const RPN& rhs );
	RPN&	operator=( const RPN& rhs );
	void	calculate( char** argv );

private:
	std::stack<int> _stack;

};
