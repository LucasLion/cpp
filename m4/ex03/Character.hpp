/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:44:12 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/23 19:58:45 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

public:
						Character( void );
						Character( const std::string& name );
						Character( const Character& src );
						~Character( void );
	Character&			operator=( const Character& src ) const;
	const std::string&	getName( void ) const;
	void				equip( AMateria* m );
	void				unequip( int idx );
	void 				use( int idx, ICharacter& target );
	AMateria*			dropMateria( int idx );
	AMateria*			getInventory( void ) const;

private:
	AMateria*	_inventory[4];
	std::string _name;
};

#endif

