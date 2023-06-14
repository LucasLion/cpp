/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:05:06 by llion             #+#    #+#             */
/*   Updated: 2023/06/14 21:03:50 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

#include <string>

// TODO bug d'affichage apres srd::cin
int main(void)
{
    PhoneBook   repertoire;
    std::string buffer;
    int         index;
    int         exit = 0;

    while (!exit) {
            std::cout << "Entrez une commande : ";
            std::getline(std::cin, buffer);
            if (!buffer.compare("ADD") || !buffer.compare("add"))
                repertoire.addContact();
            else if (!buffer.compare("SEARCH") || !buffer.compare("search")) {
                repertoire.displayMenu();
                std::cout << "Entrez un index : ";
                while (!(std::cin >> index) || index < 0 || index > MAX_CONTACTS)
                {
                    std::cout << "Entrez un index valide : ";
                    std::cin.clear();
                    std::cin.ignore(10000,'\n');
                }
                repertoire.displayContact(index);
            }
            else if (!buffer.compare("EXIT") || !buffer.compare("exit"))
                exit = 1;
    }
    return (0);
}
