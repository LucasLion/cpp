/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:18:27 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/21 15:51:26 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

#define RE "\033[0m"
#define G "\033[32m"
#define Y "\033[33m"
#define R "\033[31m"

class WrongAnimal {

public:
					WrongAnimal( );
					WrongAnimal( const WrongAnimal& src );
	WrongAnimal&	operator=( const WrongAnimal& src );
					~WrongAnimal( );	

	std::string		getType( void ) const;
	void			makeSound( void ) const;

protected:
	std::string	type;

};

#endif
