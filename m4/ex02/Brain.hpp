/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:56:18 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/22 16:31:36 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "AAnimal.hpp"

class Brain {
	
public:
				Brain( void );
				Brain( const Brain &src );		
	Brain&		operator=( const Brain &src );
				~Brain( void );
	void		setIdea( int index );
	std::string	getIdea( int index ) const;
private:
		std::string ideas[100];	
};

#endif
