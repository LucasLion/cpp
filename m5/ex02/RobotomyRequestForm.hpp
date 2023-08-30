/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:30:22 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/30 21:48:24 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

public:
							RobotomyRequestForm( void );
							RobotomyRequestForm( std::string target );
							RobotomyRequestForm( const RobotomyRequestForm& src );
	RobotomyRequestForm&	operator=( const RobotomyRequestForm& src );
							~RobotomyRequestForm( void );
	void					execute( const Bureaucrat& executor ) const ;

private:
	std::string			_target;

};

#endif
