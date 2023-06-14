/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:06:53 by llion             #+#    #+#             */
/*   Updated: 2023/06/14 15:33:08 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

Contact::Contact(void) {
	std::cout << "Contact created" << std::endl;
	return;
}

Contact::~Contact(void) {
	std::cout << "Contact destroyed" << std::endl;
	return;
}

void	Contact::setFirstName() {
    std::string firstName;

	std::cout << "Set Name: ";
	std::getline(std::cin, firstName);
	_firstName = firstName;
}

std::string	Contact::getFirstName(void) {
	return this->_firstName;
}

