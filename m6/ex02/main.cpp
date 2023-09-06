/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:05 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 12:12:59 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main( void ) {

	Base base = Base();

	Base* bas;
	bas = base.generate();
	std::cout << &bas << std::endl;
}
