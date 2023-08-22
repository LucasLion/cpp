/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:59:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 11:57:48 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:
			Dog( void );
			Dog( const Dog& src );
	Dog&	operator=( const Dog& src );
			~Dog( void );
	void	makeSound( void ) const;
	void	setType( std::string type );
private:
	Brain*	brain;
};

#endif
