/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:37:28 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 19:41:00 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {

public:
			HumanB( std::string name, Weapon weapon );
			~HumanB( void );
	void	attack( void );

private:
	std::string	_name;
	Weapon		&_weapon;

};
