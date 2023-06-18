/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:15:22 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 21:03:47 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

public:
						Weapon( std::string type );
						~Weapon( void );
	std::string const	&getType( void ) const;
	void				setType( std::string type );

private:
	std::string	_type;

};

#endif
