/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:39:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/07 17:25:58 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T > 
void	iter( T* array, int size, void (f)(T) ) {

	for (int i = 0; i < size; i++) {
		f(array[i]);
	}
	std::cout << std::endl;
}

template< typename T >
void	display( T obj ) {
	std::cout << obj << " ";
}
