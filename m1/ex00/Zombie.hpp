/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 00:59:59 by llion             #+#    #+#             */
/*   Updated: 2023/06/16 15:11:05 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
		
private:
	std::string	name;

public:
			Zombie();
			~Zombie();
	void	announce( void );
	void	setName( std::string name );
			
};

void		randomChump( std::string name );
Zombie*		newZombie( std::string name );

#endif
