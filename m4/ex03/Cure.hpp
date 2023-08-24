/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:17:46 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/24 17:28:00 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {

public:
						Cure( void );
						Cure( const AMateria& src );
						~Cure( void );
	Cure&				operator=( const Cure& src );
	std::string	const&	getType( void ) const;
	Cure*				clone( void ) const;
	void				use( ICharacter& target );	

private:
	std::string _type;
};

#endif
