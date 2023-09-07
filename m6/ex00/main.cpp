/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:05 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/07 10:52:26 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main( int argc, char** argv) {
	(void)argc;
	(void)argv;
//	if (argc != 2) {
//		std::cout << "Usage: ./convert <string>" << std::endl;
//		return (0);
//	}
//	ScalarConverter sc;
	ScalarConverter::convert("12312312312312312312312312312312312313213123123123.123f"); //sc.convert(argv[1]);
}
