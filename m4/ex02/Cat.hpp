/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:01:50 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 16:31:51 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:
			Cat( void );
			Cat( const Cat& src );
	Cat&	operator=( const Cat& src );
			~Cat( void );
	void	makeSound( void ) const;
	void	setType( std::string type );
private:
	Brain*	brain;
};

#endif
