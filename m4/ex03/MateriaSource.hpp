/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:39:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/24 18:23:41 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
					MateriaSource( void );
					MateriaSource( const MateriaSource& );
	MateriaSource&	operator=(MateriaSource const & ref);
					~MateriaSource( );
	void			displayBook( void );
	void			learnMateria( AMateria* m );
	AMateria*		createMateria( std::string const & type );

private:
	AMateria*	_book[4];
};

#endif
