/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:31:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/20 17:17:40 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main( void ) {
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	std::cout << "Test who pass" << std::endl;
	try {
		easyfind(v, 2);
	} catch (std::exception &e) {
		std::cout << "Not found" << std::endl;
	}
	std::cout << "Test who fail" << std::endl;
	try {
		easyfind(v, 5);
	} catch (std::exception &e) {
		std::cout << "Not found" << std::endl;
	}
	return (0);
}
