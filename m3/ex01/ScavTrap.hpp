/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:22:51 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/28 11:30:35 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
				ScavTrap( );
				ScavTrap( std::string name );
	ScavTrap&	operator=( const ScavTrap& source );
				~ScavTrap( );
	void		attack( const std::string& target );
	void		guardGate( void ) const;
};

#endif
