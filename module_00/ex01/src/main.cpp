/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:05:06 by llion             #+#    #+#             */
/*   Updated: 2023/05/06 03:47:32 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

// TODO
// faire en sorte de pouvoir definir la fonction setFirstName

int main(void)
{
    PhoneBook repertoire;

    std::string buffer;
    int         exit = 0;

    while (exit == 0)
    {
        std::cout << "Entrez une commande : ";
        std::cin >> buffer;
        if (buffer.compare("ADD") == 0)
        {
            std::cout << "\tYou can add a contact" << std::endl;
            Contact.setFirstName();
        }
        else if (buffer.compare("SEARCH") == 0)
            std::cout << "\tYou can SEARCH a contact" << std::endl;
        else if (buffer.compare("EXIT") == 0)
            exit = 0;
    }
    return (0);
}
