/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:36:15 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/16 15:42:13 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
				FragTrap( );
				FragTrap( std::string name );
	FragTrap&	operator=( const FragTrap& src );
				~FragTrap( void );
	void		attack( const std::string& target );
	void		highFivesGuys( void ) const;

private:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_damage;
};
#endif
