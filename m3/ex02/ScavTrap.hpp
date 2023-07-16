/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:22:51 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 14:55:59 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
			ScavTrap( );
			ScavTrap( std::string name );
	void	operator=( const ScavTrap& source );
			~ScavTrap( );
	void	attack( const std::string& target );
	void	guardGate( void ) const;

private:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_damage;
};

#endif
