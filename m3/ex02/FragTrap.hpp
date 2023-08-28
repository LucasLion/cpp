/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:36:15 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/28 11:31:59 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <cstdlib>

class FragTrap : public ClapTrap {

public:
				FragTrap( );
				FragTrap( std::string name );
	FragTrap&	operator=( const FragTrap& src );
				~FragTrap( void );
	void		attack( const std::string& target );
	void		highFivesGuys( void ) const;

};
#endif
