/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:17:46 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/24 17:27:18 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {

public:
						Ice( );
						Ice( const AMateria& src );
						~Ice( );
	Ice&				operator=( const Ice& src );
	std::string	const&	getType( void ) const;
	Ice*				clone( ) const;
	void				use( ICharacter& target );	

private:
	std::string _type;
};

#endif
