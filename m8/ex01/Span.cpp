/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:47:17 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/12 15:35:54 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

Span::Span( void ) : _max(10), _vector() {
	std::cout << "Constructeur par default cree (max = 10)" << std::endl;
}

Span::Span( unsigned int n ) : _max(n), _vector() {
	std::cout << "Constructeur standard cree" << std::endl;
}

Span::Span( const Span& rhs ) : _max(rhs._max) {
	std::cout << "Constructeur de recopie cree" << std::endl;
}

Span::~Span( void ) {
	std::cout << "Destructeur appele" << std::endl;
}

unsigned int	Span::getMax( void ) const {
	return (this->_max);
}

void	Span::addNumber( int i ) const {

}

unsigned int	Span::shortestSpan( void ) const {
	return (0);
}

unsigned int	Span::longestSpan( void ) const {
	return (0);
}

