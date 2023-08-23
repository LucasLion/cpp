/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:33:44 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/23 13:33:21 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#define RE "\033[0m"
#define G "\033[32m"
#define Y "\033[33m"
#define R "\033[31m"

# include <iostream>

class ICharacter;

class AMateria {

public:
						AMateria( void );
						AMateria( std::string const& type );
						AMateria( AMateria const& src );
	virtual				~AMateria( void );
	AMateria&			operator=( const AMateria& src );
	std::string const&	getType( ) const;
	virtual AMateria*	clone( ) const = 0;
	virtual void		use( ICharacter& target );

protected:
	std::string _type;
};

#endif
