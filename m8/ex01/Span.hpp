/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:13:34 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/14 13:41:09 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <string>

class Span {

public:
						Span( void );
						Span( unsigned int n );
						Span( const Span& rhs );
						~Span( void );

	void				addNumber( int i ) ; 
	void				addManyNumber( int i ) ;
	unsigned int		shortestSpan( void ) const ;
	unsigned int	 	longestSpan( void ) const ;
	std::vector<int>	getVector( void ) const ;
	int&				operator[]( unsigned int i );
	unsigned int		getSize( void ) const ;

	class vectorFullException : public std::exception {
		virtual const char* what( void ) const throw ();
	};

private:
	unsigned int		_size;
	std::vector<int>	_vector;

};

