/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:06:53 by llion             #+#    #+#             */
/*   Updated: 2023/06/14 10:55:22 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

Contact::Contact(void) {
	std::cout << "Contact created" << std::endl;
	return ;
}

Contact::~Contact(void) {
	std::cout << "Contact destroyed" << std::endl;
	return ;
}

void	Contact::setFirstName(std::string firstName) {
	_firstName = firstName;
	std::cout << "Nom defini" << std::endl;
}
