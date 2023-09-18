/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:31:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/18 13:22:32 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>

int main( void ) {
	Span sp1(10);

	sp1.addNumber(-12);
	sp1.addNumber(-1);
	sp1.addNumber(4);
	sp1.addNumber(8);
	sp1.addNumber(20);
	sp1.addNumber(144);
	sp1.addNumber(-144);

	std::vector<int> vec = sp1.getVector();
	std::vector<int>::iterator begin = vec.begin();
	std::cout << std::endl;
	std::cout <<"Max Size: " <<  sp1.getSize() << std::endl;
	std::cout << "Size: " << vec.size() << std::endl;

	for (begin = vec.begin(); begin != vec.end(); begin++) {
		std::cout << *begin << " ";
	}
	std::cout << std::endl;
	try {
		std::cout << "shortest: " << sp1.shortestSpan() << std::endl;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	};
	try {
		std::cout << "longest: " << sp1.longestSpan() << std::endl;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	};

	try {
		sp1.addNumber(20);
		sp1.addNumber(144);
		sp1.addNumber(-144);
		sp1.addNumber(-144);
		sp1.addNumber(-144);
		sp1.addNumber(-144);
		sp1.addNumber(-144);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	Span sp2(100);

	std::vector<int> vec2 = sp2.getVector();
	sp2.addNumbers(20);

	for (begin = vec2.begin(); begin != vec2.end(); begin++) {
		std::cout << *begin << " ";
	}

	try {
		std::cout << "shortest: " << sp2.shortestSpan() << std::endl;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	};
	try {
		std::cout << "longest: " << sp2.longestSpan() << std::endl;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	};
	//try {
	//	std::cout << "shortest: " << sp2.shortestSpan() << std::endl;
	//} catch (std::exception& e){
	//	std::cout << e.what() << std::endl;
	//};
	//try {
	//	std::cout << "longest: " << sp2.longestSpan() << std::endl;
	//} catch (std::exception& e){
	//	std::cout << e.what() << std::endl;
	//};
	//Span sp3;

	//sp3 = sp1;
	//std::vector<int> vec3 = sp3.getVector();
	//std::vector<int>::iterator begin3 = vec3.begin();
	//std::cout << std::endl;
	//std::cout <<"Max Size: " <<  sp3.getSize() << std::endl;
	//std::cout << "Size: " << vec3.size() << std::endl;

	//for (begin3 = vec3.begin(); begin3 != vec3.end(); begin3++) {
	//	std::cout << *begin3 << " ";
	//}
	//std::cout << std::endl;
	//try {
	//	std::cout << "shortest: " << sp3.shortestSpan() << std::endl;
	//} catch (std::exception& e){
	//	std::cout << e.what() << std::endl;
	//};
	//try {
	//	std::cout << "longest: " << sp3.longestSpan() << std::endl;
	//} catch (std::exception& e){
	//	std::cout << e.what() << std::endl;
	//};

}
