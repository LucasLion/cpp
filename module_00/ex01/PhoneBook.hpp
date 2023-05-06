/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:30:24 by llion             #+#    #+#             */
/*   Updated: 2023/05/06 03:42:28 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Contact {
	
public:
			Contact(void);
			~Contact(void);
	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setNickname(std::string nickname);
	void	setPhoneNumber(std::string phoneNumber);
	void	setDarkestSecret(std::string darkestSecret);
	char	*getFirstName(void);
	char	*getLastName(void);
	char	*getNickname(void);
	char	*getPhoneNumber(void);
	char	*getDarkestSecret(void);

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
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
