/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:38:41 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/24 17:42:09 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{

public:
	virtual				~IMateriaSource( ) {}
	virtual void		learnMateria( AMateria* ) = 0;
	virtual AMateria*	createMateria( std::string const & type ) = 0;
};

#endif
