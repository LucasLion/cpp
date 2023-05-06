/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:30:24 by llion             #+#    #+#             */
/*   Updated: 2023/05/06 03:05:46 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Contact {
	
public:
	Contact(void);
	~Contact(void);
	void	setFirstName(char *firstName);
	void	setLastName(char *lastName);
	void	setNickname(char *nickname);
	void	setPhoneNumber(char *phoneNumber);
	void	setDarkestSecret(char *darkestSecret);
	char	*getFirstName(void);
	char	*getLastName(void);
	char	*getNickname(void);
	char	*getPhoneNumber(void);
	char	*getDarkestSecret(void);

private:
	char _firstName[512];
	char _lastName[512];
	char _nickname[512];
	char _phoneNumber[20];
	char _darkestSecret[512];
};

class PhoneBook {
	
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	addContact(void);

private:
	Contact	_contacts[8];
};

#endif
