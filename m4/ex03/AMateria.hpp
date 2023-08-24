/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:33:44 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/24 15:17:54 by llion@student    ###   ########.fr       */
			//delete this->_inventory[idx];		
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
	void				setType( const std::string& type );
	virtual AMateria*	clone( ) const = 0;
	virtual void		use( ICharacter& target ); 

protected:
	std::string _type;
};

std::ostream&	operator<<( std::ostream& os, const AMateria& src );

#endif
