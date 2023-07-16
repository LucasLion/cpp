/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:32:06 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 17:43:28 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap {

public:
					DiamondTrap( );
					DiamondTrap( std::string name );
	DiamondTrap&	operator=( const DiamondTrap& rhs );
					DiamondTrap( DiamondTrap const & src );
					~DiamondTrap( );
	void			whoAmI( void );

private:
	std::string _name;
};

#endif


