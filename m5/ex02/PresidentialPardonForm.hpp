/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:30:22 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/30 22:03:35 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

public:
							PresidentialPardonForm( void );
							PresidentialPardonForm( std::string target );
							PresidentialPardonForm( const PresidentialPardonForm& src );
	PresidentialPardonForm&	operator=( const PresidentialPardonForm& src );
							~PresidentialPardonForm( void );
	void					execute( const Bureaucrat& executor ) const ;

private:
	std::string			_target;

};

#endif
