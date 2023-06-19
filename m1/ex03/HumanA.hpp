/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:14:36 by llion             #+#    #+#             */
/*   Updated: 2023/06/19 14:58:27 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:
				HumanA( std::string name, Weapon& weapon );
				~HumanA( void );
	void		attack( void );
	std::string	getName( void );

private:
	std::string	_name;
	Weapon&		_weapon;

};

#endif
