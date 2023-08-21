/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:32:06 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/17 14:05:20 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:
					DiamondTrap( );
					DiamondTrap( std::string name );
	DiamondTrap&	operator=( const DiamondTrap& rhs );
					DiamondTrap( DiamondTrap const & src );
					~DiamondTrap( );
	void			whoAmI( void );
	std::string		getName( void ) const;

private:
	std::string _name;
};

#endif


