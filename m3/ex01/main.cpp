/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:34:24 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 14:28:36 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#define RE "\033[0m"
#define R "\033[31m"
#define G "\033[32m"
#define Y "\033[33m"
#define B "\033[34m"

int main()
{
	ClapTrap clap("ted");
	ClapTrap clap_copy;
	clap_copy = clap;
	ClapTrap clap_copy2(clap);
	ScavTrap scav("scav");

	std::cout << std::endl;
	std::cout << "clap name: " << B << clap.getName() << RE << std::endl;
	std::cout << "clap health: " << B << clap.getHealth() << RE << std::endl;
	std::cout << "clap energy: " << B << clap.getEnergy() << RE << std::endl;
	std::cout << "clap damages: " << B << clap.getDamage() << RE << std::endl;

	std::cout << std::endl;
	std::cout << "clap_copy name: " << B << clap_copy.getName() << RE << std::endl;
	std::cout << "clap_copy health: " << B << clap_copy.getHealth() << RE << std::endl;
	std::cout << "clap_copy energy: " << B << clap_copy.getEnergy() << RE << std::endl;
	std::cout << "clap_copy damages: " << B << clap_copy.getDamage() << RE << std::endl;

	std::cout << std::endl;
	clap_copy.takeDamage(1);
	std::cout << "clap_copy health: " << clap_copy.getHealth() << std::endl;
	std::cout << "clap health: " << clap.getHealth() << std::endl;
	clap_copy.beRepaired(1);
	std::cout << "clap_copy health: " << clap_copy.getHealth() << std::endl;
	std::cout << "clap health: " << clap.getHealth() << std::endl;
	clap_copy.takeDamage(10);
	std::cout << "clap_copy health: " << clap_copy.getHealth() << std::endl;
	std::cout << "clap health: " << clap.getHealth() << std::endl;
	clap_copy.beRepaired(10);
	clap.beRepaired(10);
	clap.attack("Mike");

	clap_copy2.attack("Sebastian");
	clap_copy2.takeDamage(9);
	clap_copy2.takeDamage(9);
	clap_copy2.beRepaired(100);
	std::cout << std::endl;

	scav.attack("Mike");
	std::cout << "scav health: " << scav.getHealth() << std::endl;
	std::cout << "scav energy: " << scav.getEnergy() << std::endl;
	std::cout << "scav damages: " << scav.getDamage() << std::endl;
	scav.guardGate();
	scav.takeDamage(1);
	scav.beRepaired(1);
	scav.takeDamage(10);
	scav.attack("Mike");
	scav.beRepaired(100);
	scav.attack("hose");
	std::cout << "scav life: " << scav.getHealth() << std::endl;

	return (0);
}
