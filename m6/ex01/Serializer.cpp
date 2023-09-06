/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:03:42 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 11:42:31 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ) { }
Serializer::Serializer(Serializer const & src) { static_cast<void>(src); }
Serializer::~Serializer( void ) {  }
Serializer&	Serializer::operator=( Serializer const & rhs ) { static_cast<void>(rhs); return *this; }

uintptr_t		Serializer::serialize( Data* data ) {
	return (reinterpret_cast<uintptr_t>(data));
}

Data*			Serializer::deserialize( uintptr_t raw ) {
	return (reinterpret_cast<Data *>(raw));
}
