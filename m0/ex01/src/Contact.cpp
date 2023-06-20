/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:06:53 by llion             #+#    #+#             */
/*   Updated: 2023/06/16 11:21:32 by llion            ###   ########.fr       */
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
	bool isAlNum = true;

	while (firstName.empty())
	{
		isAlNum = true;
		std::cout << "set name: ";
		std::getline(std::cin, firstName);
		for (std::size_t i = 0; i < firstName.length(); i++)
		{
			if (!std::isalnum(firstName[i]))
			{
				isAlNum = false;
				break;
			}
		}
		if (!isAlNum)
		{
			std::cout << "Invalid input. Please enter an alpha-numeric character" << std::endl;
			firstName.clear();
		}
	}
	_firstName = firstName;
}

void	Contact::setLastName() {
    std::string lastName;
	bool isAlNum = true;

	while (lastName.empty())
	{
		isAlNum = true;
		std::cout << "set last name: ";
		std::getline(std::cin, lastName);
		for (std::size_t i = 0; i < lastName.length(); i++)
		{
			if (!std::isalnum(lastName[i]))
			{
				isAlNum = false;
				break;
			}
		}
		if (!isAlNum)
		{
			std::cout << "Invalid input. Please enter an alpha-numeric character" << std::endl;
			lastName.clear();
		}
	}
	_lastName = lastName;
}

void	Contact::setNickName() {
    std::string nickName;
	bool isAlNum = true;

	while (nickName.empty())
	{
		isAlNum = true;
		std::cout << "set nickname: ";
		std::getline(std::cin, nickName);
		for (std::size_t i = 0; i < nickName.length(); i++)
		{
			if (!std::isalnum(nickName[i]))
			{
				isAlNum = false;
				break;
			}
		}
		if (!isAlNum)
		{
			std::cout << "Invalid input. Please enter an alpha-numeric character" << std::endl;
			nickName.clear();
		}
	}
	_nickName = nickName;
}

void	Contact::setPhoneNumber() {
    std::string phoneNumber;
	bool isDigit = true;

	while (phoneNumber.empty())
	{
		isDigit = true;
		std::cout << "set phone number: ";
		std::getline(std::cin, phoneNumber);
		for (std::size_t i = 0; i < phoneNumber.length(); i++)
		{
			if (!std::isdigit(phoneNumber[i]))
			{
				isDigit = false;
				break;
			}
		}
		if (!isDigit)
		{
			std::cout << "Invalid input. Please enter an alpha-numeric character" << std::endl;
			phoneNumber.clear();
		}
	}
	_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret() {
    std::string darkestSecret;
	bool isAlNum = false;

	while (darkestSecret.empty())
	{
		isAlNum = true;
		std::cout << "what's your darkest secret? ";
		std::getline(std::cin, darkestSecret);
		for (std::size_t i = 0; i < darkestSecret.length(); i++)
		{
			if (!std::isalnum(darkestSecret[i]))
			{
				isAlNum = false;
				break;
			}
		}
		if (!isAlNum)
		{
			std::cout << "Invalid input. Please enter an alpha-numeric character" << std::endl;
			darkestSecret.clear();
		}
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
