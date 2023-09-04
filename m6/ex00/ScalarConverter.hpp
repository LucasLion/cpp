/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:05:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/04 19:41:37 by llion@student    ###   ########.fr       */
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
	std::string			findType( const std::string& str );
	bool				isChar( const std::string& str );
	bool				isInt( const std::string& str );
	bool				isFloat( const std::string& str );
	bool				isDouble( const std::string& str );
	void				convertFromChar( const std::string& str );
	void				convertFromInt( const std::string& str );
	void				convertFromFloat( const std::string& str );
	void				convertFromDouble( const std::string& str );
	void				convert( const std::string& str );
	void				display( const std::string& std );
}; 

#endif
