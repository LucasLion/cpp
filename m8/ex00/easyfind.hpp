/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:13:34 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/20 17:17:06 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <exception>
#include <iterator>

template <typename T>
void	easyfind( T& type, int i ) {
	if (std::find(type.begin(), type.end(), i) != type.end())
		std::cout << "found" << std::endl;
	else 
		std::cout << "not found" << std::endl;
}


