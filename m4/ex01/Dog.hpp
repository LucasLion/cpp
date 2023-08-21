/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:59:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/21 15:32:15 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:
					Dog( );
					Dog( const Dog& src );
	Dog&			operator=( const Dog& src );
					~Dog( );
	void			makeSound( ) const;
	void			setType( std::string type );

};

#endif
