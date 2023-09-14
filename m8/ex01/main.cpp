/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:31:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/14 13:45:35 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ) {
	Span sp1(10);

	for (int i = 0; i < 12; i++ ) {
		try {
			sp1.addNumber(2);
		}
		catch (std::exception& e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::vector<int> vec = sp1.getVector();
	std::vector<int>::iterator begin = vec.begin();
	for (begin = vec.begin(); begin != vec.end(); begin++) {
		std::cout << *begin << " ";
	}
	std::cout << std::endl;
	std::cout <<"Max Size: " <<  sp1.getSize() << std::endl;
	std::cout << "Size: " << vec.size() << std::endl;
}
