/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:05:06 by llion             #+#    #+#             */
/*   Updated: 2023/06/14 14:30:45 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"


int main(void)
{
    PhoneBook   repertoire;
    std::string buffer;
    int         exit = 0;

    while (!exit) {
            std::cout << "Entrez une commande : ";
            std::getline(std::cin, buffer);
            if (buffer.compare("ADD") == 0 || buffer.compare("add") == 0)
                repertoire.addContact();
            else if (buffer.compare("SEARCH") == 0 || buffer.compare("search") == 0)
                repertoire.displayMenu();
            else if (buffer.compare("EXIT") == 0 || buffer.compare("exit") == 0)
                return (0);
    }
    return (0);
}
