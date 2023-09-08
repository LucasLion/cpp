/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:35:06 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/07 17:26:15 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "Iter.hpp"

int main( void ) {
	int		size = 10;
	int		intArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8 ,9};
	float	floatArray[] = {0.1f, 1.1f, 2.2f, 3.3f, 4.4f,
							5.5f, 6.6f, 7.7f, 8.8f, 9.9f};
	double	doubleArray[] = {0.1, 1.1, 2.2, 3.3, 4.4,
							5.5, 6.6, 7.7, 8.8, 9.9};
	char	charArray[] = {'a', 'b', 'c', 'd', 'e',
							'f', 'g', 'h', 'i', 'j'};

	std::cout << "intArray: ";
	iter< int >(intArray, size, display);
	std::cout << "floatArray: ";
	iter< float >(floatArray, size, display);
	std::cout << "doubleArray: ";
	iter< double >(doubleArray, size, display);
	std::cout << "charArray: ";
	iter< char >(charArray, size, display);

	return (0);
}
