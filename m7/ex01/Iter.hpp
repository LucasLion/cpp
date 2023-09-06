/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:39:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 19:14:17 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T > 
void	iter( T* array, int size, void (f)(T) ) {

	for (int i = 0; i < size; i++) {
		std::cout << "Before function call: " << array[i] << std::endl;
		f(array[i]);
		std::cout << "After function call: " << array[i] << std::endl;
	}
}

template< typename T >
void	increment( T obj ) {
	obj++;
}
