/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:05:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 11:47:13 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP


# include <iostream>
# include <stdint.h>

#define RE "\033[0m"
#define G "\033[32m"
#define Y "\033[33m"
#define R "\033[31m"

struct Data {
	std::string	data;
	int			nums;
};

class Serializer {

public:
						Serializer( void );
						Serializer( Serializer const & src );
						~Serializer( void );
	Serializer&	operator=( Serializer const & rhs );
	static uintptr_t	serialize( Data* ptr );
	static Data*		deserialize( uintptr_t raw );
}; 

#endif
