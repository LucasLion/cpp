/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:28:53 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 12:02:27 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ostream>

#define RE "\033[0m"
#define G "\033[32m"
#define Y "\033[33m"
#define R "\033[31m"

class Bureaucrat {

public:
				Bureaucrat( void );
				Bureaucrat( std::string name, int grade );
				Bureaucrat( const Bureaucrat& src );
				~Bureaucrat( void );
	Bureaucrat&	operator=( const Bureaucrat& src );
	std::string	getName( void ) const;
	int			getGrade( void ) const;
	void		setName( std::string name );
	void		setGrade( int grade );
	void		increment( void );
	void		decrement( void );

	class GradeTooHighException : public std::exception {
		virtual const char* what( void ) const throw( );
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what( void ) const throw( );
	};
private:
	std::string	_name;
	int			_grade;
};

std::ostream&	operator<<( std::ostream& COUT, const Bureaucrat& b );

#endif
