/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:35:40 by llion             #+#    #+#             */
/*   Updated: 2023/06/14 15:32:13 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "PhoneBook created" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook destroyed" << std::endl;
	return;
}

void	PhoneBook::addContact() {
	static int	i = 0;

	this->_contacts[i].setFirstName();
	if (i <= 3)
		i++;
	i = i % 3;
}

void	PhoneBook::displayMenu() {
	std::cout << "Contacts: " << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << this->_contacts[i].getFirstName() << std::endl;
}
