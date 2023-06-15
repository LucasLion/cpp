/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:06:53 by llion             #+#    #+#             */
/*   Updated: 2023/06/15 14:58:31 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

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

	while (firstName.empty())
	{
		std::cout << "set name: ";
		std::getline(std::cin, firstName);
	}
	_firstName = firstName;
}

void	Contact::setLastName() {
    std::string lastName;

	while (lastName.empty())
	{
		std::cout << "set last name: ";
		std::getline(std::cin, lastName);
	}
	_lastName = lastName;
}

void	Contact::setNickName() {
    std::string nickName;

	while (nickName.empty())
	{
		std::cout << "set nickname: ";
		std::getline(std::cin, nickName);
	}
	_nickName = nickName;
}

void	Contact::setPhoneNumber() {
    std::string phoneNumber;

	while (phoneNumber.empty())
	{
		std::cout << "set phone number: ";
		std::getline(std::cin, phoneNumber);
	}
	_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret() {
    std::string darkestSecret;

	while (darkestSecret.empty())
	{
		std::cout << "what's your darkest secret? ";
		std::getline(std::cin, darkestSecret);
	}
	_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void) {
	return this->_firstName;
}

std::string	Contact::getLastName(void) {
	return this->_lastName;
}

std::string	Contact::getNickName(void) {
	return this->_nickName;
}

std::string	Contact::getPhoneNumber(void) {
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret(void) {
	return this->_darkestSecret;
}
