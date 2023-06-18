/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:15:58 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 20:36:30 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

public:
				HumanB(std::string name);
				~HumanB(void);
	void		attack(void);
	std::string	getName(void);
	void		setWeapon(Weapon weapon);

private:
	std::string	_name;
	Weapon		_weapon;

};

#endif
