/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:05:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 12:11:04 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP


# include <iostream>
# include <cstdlib>
# include <ctime>

# define RE "\033[0m"
# define G "\033[32m"
# define Y "\033[33m"
# define R "\033[31m"

class Base {

public:
	virtual ~Base( void );
	Base*	generate( void );
	void	identify( Base* p );
	void	identify( Base& p );
};

class A : public Base { ~A( void ); };
class B : public Base { ~B( void ); };
class C : public Base { ~C( void ); };

#endif
