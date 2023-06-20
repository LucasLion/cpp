/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:30:24 by llion             #+#    #+#             */
/*   Updated: 2023/06/16 10:56:40 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <cstdlib>
# include <iomanip>

# define MAX_CONTACTS 8
# define SIZE 10

class Contact {
	
public:
				Contact();
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

#endif
