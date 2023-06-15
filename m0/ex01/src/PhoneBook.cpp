/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:35:40 by llion             #+#    #+#             */
/*   Updated: 2023/06/15 15:31:24 by llion            ###   ########.fr       */
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
	this->_contacts[i].setLastName();
	this->_contacts[i].setNickName();
	this->_contacts[i].setPhoneNumber();
	this->_contacts[i].setDarkestSecret();
	if (i <= MAX_CONTACTS)
		i++;
	i = i % MAX_CONTACTS;
}

void	PhoneBook::displayContact(int index) {
	std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
}

std::string	PhoneBook::shrink(std::string str) {
	std::string shrinked = str;
	if (shrinked.length() > SIZE) {
		shrinked.resize(SIZE - 1);
		shrinked.append(".");
	}
	return shrinked;
}	

void	PhoneBook::displayMenu() {
	for (int i = 0; i < 5; i++)
		std::cout << std::setfill('-');
	std::cout << "┌" << std::setw(SIZE) << "" << "┬" << std::setw(SIZE) << "";
	std::cout << "┬" << std::setw(SIZE) << "" << "┬" << std::setw(SIZE) << "" << "┐" << std::endl;
	std::cout << std::setfill(' ');
	std::cout << "│" << std::setw(SIZE) << "Index" << "│" << std::setw(SIZE) << "First Name" << "│";

	std::cout << std::setw(SIZE) << "Last Name" << "│" << std::setw(SIZE) << "Nickname" << "│" << std::endl;

	std::cout << std::setfill('-');
	std::cout << "├" << std::setw(SIZE) << "";
	std::cout << "┼" << std::setw(SIZE) << "";
	std::cout << "┼" << std::setw(SIZE) << "";
	std::cout << "┼" << std::setw(SIZE) << "" << "┤" << std::endl;
	std::cout << std::setfill(' ');
	for (int i = 0; i < MAX_CONTACTS; i++) {
		std::cout << "│" << std::setw(SIZE) << i + 1;
		std::cout << "│" << std::setw(SIZE) << shrink(this->_contacts[i].getFirstName());
		std::cout << "│" << std::setw(SIZE) << shrink(this->_contacts[i].getLastName());
		std::cout << "│" << std::setw(SIZE) << shrink(this->_contacts[i].getNickName()) << "│" << std::endl;
	}
	std::cout << std::setfill('-');
	std::cout << "└"<< std::setw(SIZE) << "" << "┴" << std::setw(SIZE) << "";
	std::cout << "┴"<< std::setw(SIZE) << "" << "┴" << std::setw(SIZE) << "" << "┘" << std::endl;
}

void PhoneBook::selectContact(int &index, std::string s) {
	int	valid = false;
	do {
		std::cout << "choose index: ";
		std::getline(std::cin, s);
		index = std::atoi(s.c_str());
		if (std::cin.good() && index > 0 && index <= MAX_CONTACTS)
			valid = true;
		else {
			std::cin.clear();
			std::cout << "Invalid index; please try again" << std::endl;
		valid = false;
		}
	} while (!valid);
}
