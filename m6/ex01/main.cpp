/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:05 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 11:53:34 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main( void ) {
	Data* data = new Data;
	uintptr_t raw;
	data->data = "Hello World!";
	data->nums = 42;

	std::cout << "Before serialization: " << std::endl;
	std::cout << "Data string: " << G << data->data << RE << std::endl;
	std::cout << "Data nums: " << G << data->nums << RE << std::endl;
	std::cout << "Data address: " << G << &data << RE << std::endl;
	raw = Serializer::serialize(data);
	std::cout << "After serialization: " << std::endl;
	std::cout << "Data raw: " << G << raw << RE << std::endl;
	std::cout << "Data address: " << G << &data << RE << std::endl;
	Serializer::deserialize(raw);
	std::cout << "After deserialization: " << std::endl;
	std::cout << "Data string: " << G << data->data << RE << std::endl;
	std::cout << "Data nums: " << G << data->nums << RE << std::endl;
	std::cout << "Data address: " << G << &data << RE << std::endl;
}
