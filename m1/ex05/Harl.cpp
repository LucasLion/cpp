/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:13:53 by llion             #+#    #+#             */
/*   Updated: 2023/07/06 16:06:01 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	std::cout << "Harl created" << std::endl;
	functions[0] = std::make_pair("DEBUG", &Harl::debug);
	functions[1] = std::make_pair("INFO", &Harl::info);
	functions[2] = std::make_pair("WARNING", &Harl::warning);
	functions[3] = std::make_pair("ERROR", &Harl::error);
}

Harl::~Harl() {
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	for (int i = 0; i < 4; i++) {
		if (functions[i].first == level) {
			(this->*(functions[i].second))();
		}
	}
}
