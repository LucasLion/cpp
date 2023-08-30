/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:24:13 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/30 23:00:02 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CPP
# define INTERN_CPP

#include <iostream>
#include "AForm.hpp"

class Intern {

public:
			Intern( void );
			Intern( const Intern& src );
	Intern&	operator=( const Intern& src );
			~Intern( void );
	AForm*	makeForm( std::string formName, std::string target );	

	class formNotFoundException : public std::exception {
		virtual const char* what( void ) const throw( );
	};
};

#endif
