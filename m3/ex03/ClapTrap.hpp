/*void ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:03:50 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 17:31:37 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <cwchar>
#include <iostream>
#include <string>

class ClapTrap {

public:
					ClapTrap( );
					ClapTrap( const ClapTrap& source );
					ClapTrap( const std::string name );
	ClapTrap&		operator=( const ClapTrap& source );
					~ClapTrap( );

	std::string		getName( void ) const;
	int				getHealth( void ) const;
	int				getEnergy( void ) const;
	int				getDamage( void ) const;
	void		setName( const std::string name ); 
	void		setHealth( const int health );
	void		setEnergy( const int energy );
	void		setDamage( const int damage );

	void		attack( const std::string& target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

private:
	std::string _name;
	int			_health;
	int			_energy;
	int			_damage;
};

#endif
