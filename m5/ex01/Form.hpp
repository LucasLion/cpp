/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:05:39 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/25 16:19:29 by llion@student    ###   ########.fr       */
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
						Form( const Form& src );
						~Form( void );
	Form&				operator=( const Form& src );
	void				setName( const std::string name );
	void				setSigned( bool );
	void				setGradeToSign( const int i );
	void				setGradeToExec( const int i );
	const std::string	getName( void );
	bool				getSigned( void );
	const int			getGradeToSign( void );
	const int			getGradeToExec( void );
	void				beSigned( const Bureaucrat& b );
	class GradeTooHighException {
		virtual const char* what( void ) const throw( );
	};
	class GradeTooLowException {
		virtual const char* what (void ) const throw( );
	};
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExec;
};

std::ostream& operator<<( std::ostream& COUT, Form& f );

#endif
