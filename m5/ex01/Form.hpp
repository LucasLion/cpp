/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:05:39 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/27 15:17:34 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

class Form {

public:
						Form( void );
						Form( const std::string name, const int gradeToSign, const int gradeToExec );
						Form( const Form& src );
						~Form( void );
	Form&				operator=( const Form& src );
	void				setSigned( bool );
	const std::string	getName( void );
	bool				getSigned( void );
	const int			getGradeToSign( void );
	const int			getGradeToExec( void );
	void				beSigned( const Bureaucrat& b );
	class GradeTooHighException : public std::exception {
		virtual const char* what( void ) const throw( );
	};
	class GradeTooLowException : public std::exception {
		virtual const char* what( void ) const throw( );
	};
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExec;
};

std::ostream& operator<<( std::ostream& COUT, Form& f );

#endif
