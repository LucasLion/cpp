/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:39:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/08 14:26:19 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T > 
class Array {

public:
	Array( void ) {
		_size = 0;
		_array = new T [_size];
	};

	~Array( void ) {
		delete _array;
	};

	Array( unsigned int n ) : _size(n) {
		std::cout << this->_size << std::endl;
		 _array = new T [this->_size];
	}

	Array( const Array& rhs ) {
		_size = rhs._size;
		 _array = new T [this->_size];
		for (unsigned int i = 0; i < _size; i++)
			this->_array[i] = rhs._array;
	};

	Array&	operator=( const Array& rhs ) {
		if (this != rhs) {
			this->_size = rhs._size;
			this->_array = new T [this->_size];
			for (unsigned int i = 0; i < _size; i++)
				this->_array[i] = rhs._array[i];
			
		}
		return (*this);
	};
	int	size( void ) {
		return (this->_size);
	}

	void	operator[]( const Array& rhs ) {
		// do stuff here
	}

private:
	T*				_array;
	unsigned int	_size;
};

#endif
