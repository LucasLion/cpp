/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:05:06 by llion             #+#    #+#             */
/*   Updated: 2023/06/15 10:10:00 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

#include <string>

int main(void)
{
    PhoneBook   repertoire;
    std::string buffer;
    int         index = 0;
    int         exit = 0;
    bool        valid = false;

    while (!exit) {
            std::cout << "Entrez une commande : ";
            std::getline(std::cin, buffer);
            if (!buffer.compare("ADD") || !buffer.compare("a"))
                repertoire.addContact();
            else if (!buffer.compare("SEARCH") || !buffer.compare("s")) {
                repertoire.displayMenu();
                do {
                    std::cout << "Entrez un index : " << std::flush;
                    std::cin >> index;
                    if (std::cin.good() && index > 0 && index < MAX_CONTACTS)
                        valid = true;
                    else {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        std::cout << "Invalid index; please try again" << std::endl;
                    }
                } while (!valid);
                //while (!(std::cin >> index) || index < 0 || index > MAX_CONTACTS)
                //{
                //    std::cout << "Entrez un index valide : ";
                //    std::cin.clear();
                //    std::cin.ignore(10000,'\n');
                //}
                repertoire.displayContact(index);
            }
            else if (!buffer.compare("EXIT") || !buffer.compare("e"))
                exit = 1;
    }
    return (0);
}
