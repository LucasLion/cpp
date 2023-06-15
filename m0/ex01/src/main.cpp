/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:05:06 by llion             #+#    #+#             */
/*   Updated: 2023/06/15 15:36:52 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

#include <string>

// TODO: gerer le numero de telephone?
int main(void)
{
    PhoneBook   repertoire;
    std::string command;
    std::string s = "";
    int         index = 0;

    while (true) {
            std::cout << "Entrez une commande : ";
            std::getline(std::cin, command);
            if (!command.compare("ADD") || !command.compare("a"))
                repertoire.addContact();
            else if (!command.compare("SEARCH") || !command.compare("s")) {
                repertoire.displayMenu();
                repertoire.selectContact(index, s);
                repertoire.displayContact(index - 1);
            }
            else if (!command.compare("EXIT") || !command.compare("e"))
                break ;
    }
    return (0);
}
