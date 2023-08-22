/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:18:27 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 16:31:08 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

#define RE "\033[0m"
#define G "\033[32m"
#define Y "\033[33m"
#define R "\033[31m"

class AAnimal {

public:
					AAnimal( );
					AAnimal( const AAnimal& src );
	AAnimal&			operator=( const AAnimal& src );
	virtual			~AAnimal( );	

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const = 0;

protected:
	std::string	type;

};

#endif
