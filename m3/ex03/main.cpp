/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:34:24 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/18 13:05:52 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define RE "\033[0m"
#define R "\033[31m"
#define G "\033[32m"
#define Y "\033[33m"
#define B "\033[34m"

int main()
{
	{
	ClapTrap clap("clap");
	ClapTrap clap_copy;
	clap_copy = clap;

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

	std::cout << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << std::endl;
	ClapTrap clap_copy2(clap);
	clap_copy2.attack("Sebastian");
	clap_copy2.takeDamage(9);
	clap_copy2.takeDamage(9);
	clap_copy2.beRepaired(100);

	std::cout << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << std::endl;
	}

	{
	ScavTrap scav("scav");
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
	std::cout << "--------------------------------------" << std::endl;
	std::cout << std::endl;

	}
	{
	FragTrap frag("frag");
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
	
	std::cout << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << std::endl;

	}
	{
	DiamondTrap diamond;
	std::cout << "Diamond name: " << B << diamond.getName() << RE << std::endl;
	std::cout << "Diamond health: " << B << diamond.getHealth() << RE << std::endl;
	std::cout << "Diamond energy: " << B << diamond.getEnergy() << RE << std::endl;
	std::cout << "Diamond damages: " << B << diamond.getDamage() << RE << std::endl;
	diamond.whoAmI();
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.attack("philoctet");

	DiamondTrap argentino("argentino");
	std::cout << "Argentino name: " << B << argentino.getName() << RE << std::endl;
	std::cout << "Argentino health: " << B << argentino.getHealth() << RE << std::endl;
	std::cout << "Argentino energy: " << B << argentino.getEnergy() << RE << std::endl;
	std::cout << "Argentino damages: " << B << argentino.getDamage() << RE << std::endl;
	argentino.whoAmI();
	argentino.guardGate();
	argentino.highFivesGuys();
	argentino.attack("fred");

	}
	return (0);
}
