/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:05:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/01 16:24:27 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

#define RE "\033[0m"
#define G "\033[32m"
#define Y "\033[33m"
#define R "\033[31m"

class ScalarConverter {

public:
						ScalarConverter();
						ScalarConverter(ScalarConverter const & src);
						~ScalarConverter();

						ScalarConverter&	operator=(ScalarConverter const & rhs);
						std::string			findType(const std::string& str);
	void				convert(const std::string& str);
}; 
