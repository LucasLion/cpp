/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:30:22 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/31 13:00:55 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

public:
							ShrubberyCreationForm( void );
							ShrubberyCreationForm( std::string target );
							ShrubberyCreationForm( const ShrubberyCreationForm& src );
	ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& src );
							~ShrubberyCreationForm( void );
	void					execute( const Bureaucrat& executor ) const ;
	std::string			_target;

private:

};

#endif
