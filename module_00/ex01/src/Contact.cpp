/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:06:53 by llion             #+#    #+#             */
/*   Updated: 2023/06/14 20:59:10 by llion            ###   ########.fr       */
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

void	shrink(std::string &str) {
	if (str.length() > SIZE) {
		str.resize(SIZE - 1);
		str.append(".");
	}
}	

void	Contact::setFirstName() {
    std::string firstName;

	while (firstName.empty())
	{
		std::cout << "set name: ";
		std::getline(std::cin, firstName);
	}
	_firstName = firstName;
	shrink(_firstName);
}

// TODO change _lastname to make generic function
void	Contact::set(std::string str, std::string prompt)
{
	while (str.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, str);
	}
	_lastName = str;
	shrink(_lastName);
}

void	Contact::setLastName() {
    std::string lastName;

	while (lastName.empty())
	{
		std::cout << "set last name: ";
		std::getline(std::cin, lastName);
	}
	_lastName = lastName;
	shrink(_lastName);
}

void	Contact::setNickName() {
    std::string nickName;

	while (nickName.empty())
	{
		std::cout << "set nickname: ";
		std::getline(std::cin, nickName);
	}
	_nickName = nickName;
	shrink(_nickName);
}

void	Contact::setPhoneNumber() {
    std::string phoneNumber;

	while (phoneNumber.empty())
	{
		std::cout << "set phone number: ";
		std::getline(std::cin, phoneNumber);
	}
	_phoneNumber = phoneNumber;
	shrink(_phoneNumber);
}

void	Contact::setDarkestSecret() {
    std::string darkestSecret;

	while (darkestSecret.empty())
	{
		std::cout << "what's your darkest secret? ";
		std::getline(std::cin, darkestSecret);
	}
	_darkestSecret = darkestSecret;
	shrink(_darkestSecret);
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
