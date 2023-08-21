/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:01:50 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/21 15:20:10 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:
			Cat( );
			Cat( const Cat& src );
	Cat&	operator=( const Cat& src );
			~Cat( );
	void	makeSound( ) const;
	void	setType( std::string type );
};

#endif
