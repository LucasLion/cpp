/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:35:06 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 19:25:13 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "Iter.hpp"

int main( void ) {
	int		size = 10;
	int*		intArray;

	for (int i = 0; i < size; i++) {
		*intArray = i * 2;
		intArray++;
	}
	iter< int >(intArray, size, increment);

	return (0);
}