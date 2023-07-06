/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:13:53 by llion             #+#    #+#             */
/*   Updated: 2023/07/06 17:55:13 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

HarlFilter::HarlFilter() {
	functions[0] = std::make_pair(1, "DEBUG");
	functions[1] = std::make_pair(2, "INFO");
	functions[2] = std::make_pair(3, "WARNING");
	functions[3] = std::make_pair(4, "ERROR");
}

HarlFilter::~HarlFilter() {
}

void	HarlFilter::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	HarlFilter::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	HarlFilter::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	HarlFilter::error(void) {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	HarlFilter::null(void) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	HarlFilter::complain(std::string level) {

	int	ilvl = 0;
	for (int i = 0; i < 4; i++) {
		if (functions[i].second == level) {
			ilvl = functions[i].first;	
		}
	}
	switch(ilvl) {
		case 1:
			this->debug();
		case 2:
			this->info();
		case 3:
			this->warning();
		case 4:
			this->error();
			break ;
		default:
			this->null();
			break ;
	}
}
