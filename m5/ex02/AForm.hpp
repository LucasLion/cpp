/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:05:39 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/28 16:30:54 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

class AForm {

public:
						AForm( void );
						AForm( const std::string name, int sign, const int gradeToSign, const int gradeToExec );
						AForm( const AForm& src );
						~AForm( void );
	AForm&				operator=( const AForm& src );
	void				setSigned( bool );
	const std::string	getName( void ) const ;
	bool				getSigned( void ) ;
	int					getGradeToSign( void ) const ;
	int					getGradeToExec( void ) const ;
	void				beSigned( Bureaucrat& b );
	virtual void		execute( const Bureaucrat& executor ) = 0;

	class GradeTooLowException : public std::exception {
		virtual const char* what( void ) const throw( );
	};

private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExec;
};

std::ostream& operator<<( std::ostream& COUT, AForm& f );

#endif
