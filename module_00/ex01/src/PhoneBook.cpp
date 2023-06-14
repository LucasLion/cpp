/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:35:40 by llion             #+#    #+#             */
/*   Updated: 2023/06/08 13:57:10 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "PhoneBook created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}
