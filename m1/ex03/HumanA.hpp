/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:37:29 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 19:40:14 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {

public:
			HumanA( std::string name, Weapon weapon );
			~HumanA( void );
	void	attack( void );

private:
	std::string	_name;
	Weapon		&_weapon;

};
