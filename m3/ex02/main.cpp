/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:34:24 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 16:27:30 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	FragTrap frag("frag");

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

	std::cout << std::endl;
	std::cout << "scav name: " << B << scav.getName() << RE << std::endl;
	std::cout << "scav health: " << B << scav.getHealth() << RE << std::endl;
	std::cout << "scav energy: " << B << scav.getEnergy() << RE << std::endl;
	std::cout << "scav damages: " << B << scav.getDamage() << RE << std::endl;

	std::cout << std::endl;
	scav.attack("Mike");
	scav.guardGate();
	scav.takeDamage(1);
	scav.beRepaired(1);
	for (int i = 0; i < 10; i++) {
		scav.takeDamage(10);
		scav.beRepaired(100);
	}
	scav.attack("hose");
	std::cout << "scav life: " << scav.getHealth() << std::endl;

	std::cout << std::endl;
	std::cout << "frag name: " << B << frag.getName() << RE << std::endl;
	std::cout << "frag health: " << B << frag.getHealth() << RE << std::endl;
	std::cout << "frag energy: " << B << frag.getEnergy() << RE << std::endl;
	std::cout << "frag damages: " << B << frag.getDamage() << RE << std::endl;

	std::cout << std::endl;
	frag.attack("Mike");
	std::cout << "frag health: " << frag.getHealth() << std::endl;
	std::cout << "frag energy: " << frag.getEnergy() << std::endl;
	std::cout << "frag damages: " << frag.getDamage() << std::endl;
	frag.highFivesGuys();
	frag.takeDamage(1);
	frag.beRepaired(1);
	frag.takeDamage(10);
	frag.takeDamage(91);
	std::cout << "frag life: " << frag.getHealth() << std::endl;
	frag.beRepaired(100);
	frag.attack("hose");

	return (0);
}
