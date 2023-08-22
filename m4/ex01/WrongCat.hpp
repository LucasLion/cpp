/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:01:50 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 11:58:12 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
				WrongCat( void );
				WrongCat( const WrongCat& src );
	WrongCat&	operator=( const WrongCat& src );
				~WrongCat( void );
	void		makeSound( void ) const;
	void		setType( std::string type );
};

#endif
