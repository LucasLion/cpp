/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:22:51 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/18 12:08:24 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
	ScavTrap		( );
	ScavTrap		( std::string name );
	ScavTrap&		operator=( const ScavTrap& source );
	~ScavTrap		( );
	void			guardGate( void ) const;

};

#endif
