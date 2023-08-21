/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:04:46 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/21 16:15:10 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	
	public:
			Brain( );
			Brain( const Brain &src );		
	Brain&	operator=( const Brain &src );
			~Brain( );
	private:
		std::string ideas[100];	
};

#endif
