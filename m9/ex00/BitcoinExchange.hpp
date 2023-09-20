/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:41:29 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/20 12:17:24 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <map>
#include <stdlib.h>

class BitcoinExchange {

public:
											BitcoinExchange( void );
											BitcoinExchange( const BitcoinExchange& rhs );
											~BitcoinExchange( void );
	BitcoinExchange&						operator=( const BitcoinExchange& rhs );
	void									fillData( std::map< std::string, std::string >& data );
	void									convert( char* argv[] );
	int										dateParser( std::string date );
	std::map< std::string, std::string >	getData( void );

private:
	std::map< std::string, std::string > _map;

};
