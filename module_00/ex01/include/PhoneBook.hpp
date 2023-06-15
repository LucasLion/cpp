/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:30:24 by llion             #+#    #+#             */
/*   Updated: 2023/06/15 09:52:54 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define MAX_CONTACTS 2
#define SIZE 10

class Contact {
	
public:
				Contact(void);
				~Contact(void);
	void		set(std::string toSet, std::string str, std::string msg);
	void		setFirstName(void);
	void		setLastName();
	void		setNickName();
	void		setPhoneNumber();
	void		setDarkestSecret();
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

class PhoneBook {
	
public:
				PhoneBook(void);
				~PhoneBook(void);
	void		addContact(void);
	void		displayMenu(void);
	void		displayContact(int index);
	std::string	shrink(std::string str);
	Contact	_contacts[MAX_CONTACTS];

private:
};

#endif
