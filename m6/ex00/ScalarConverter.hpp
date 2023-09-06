/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:05:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 14:07:52 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <cmath>
# include <string>

#define RE "\033[0m"
#define G "\033[32m"
#define Y "\033[33m"
#define R "\033[31m"

class ScalarConverter {

public:
						ScalarConverter( void );
						ScalarConverter( ScalarConverter const & src );
						~ScalarConverter( void );
	ScalarConverter&	operator=( ScalarConverter const & rhs );
	static std::string	findType( const std::string& str );
	static bool			isChar( const std::string& str );
	static bool			isInt( const std::string& str );
	static bool			isFloat( const std::string& str );
	static bool			isDouble( const std::string& str );
	static void			convertFromChar( const std::string& str );
	static void			convertFromInt( const std::string& str );
	static void			convertFromFloat( const std::string& str );
	static void			convertFromDouble( const std::string& str );
	static void			convert( const std::string& str );
	static void			display( const std::string& std );
}; 

#endif
