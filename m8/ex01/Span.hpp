/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:13:34 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/12 15:33:41 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span {

public:
					Span( void );
					Span( unsigned int n );
					Span( const Span& rhs );
					~Span( void );

	unsigned int	getMax( void ) const ;
	void			addNumber( int i ) const ;
	unsigned int	shortestSpan( void ) const ;
	unsigned int 	longestSpan( void ) const ;

	

private:
	const unsigned int	_max;
	std::vector<int>		_vector;

};

