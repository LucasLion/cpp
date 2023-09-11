/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:39:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/11 17:14:35 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

template< typename T > 
class Array {

public:
	Array( void ) : _size(0) {
		this->_array = new T [this->_size];
	};

	~Array( void ) {
		if (this->_size > 0)
			delete [] this->_array;
	};

	Array( unsigned int n ) : _size(n) {
		 this->_array = new T [this->_size];
	}

	Array( const Array& rhs ) : _size(rhs.size()) {
		 _array = new T [this->_size];
		for (unsigned int i = 0; i < _size; i++)
			this->_array[i] = rhs._array[i];
	};

	Array&	operator=( const Array& rhs ) {
		if (this != &rhs) {
			this->_size = rhs._size;
			if (this->_array)
				delete [] this->_array;
			this->_array = new T [this->_size];
			for (unsigned int i = 0; i < _size; i++)
				this->_array[i] = rhs._array[i];
		}
		return (*this);
	};
	int	size( void ) const {
		return (this->_size);
	}

	T&	operator[]( unsigned int i ) {
		if (i >= this->_size || this->_array == NULL)
			throw std::out_of_range("Index out of range");
		return (this->_array[i]);
	}

private:
	T*				_array;
	unsigned int	_size;
};
