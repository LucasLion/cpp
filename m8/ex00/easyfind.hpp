/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:13:34 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/11 18:44:47 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <exception>
#include <iterator>

template <typename T>
int	easyfind( T type, int i ) {
	for (int j = 0; j < static_cast<int>(type.size()); j++) {
		if (type[j] == i) {
			std::cout << "Found " << i << " at index: ";
			return (j);
		}
	}		
	throw std::exception();
}
