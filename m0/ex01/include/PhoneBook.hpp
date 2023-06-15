/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:30:24 by llion             #+#    #+#             */
/*   Updated: 2023/06/15 15:26:11 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	
public:
				PhoneBook(void);
				~PhoneBook(void);
	void		addContact(void);
	void		displayMenu(void);
	void		displayContact(int index);
	std::string	shrink(std::string str);
	void		selectContact(int &index, std::string s);
	Contact	_contacts[MAX_CONTACTS];

private:
};

#endif
