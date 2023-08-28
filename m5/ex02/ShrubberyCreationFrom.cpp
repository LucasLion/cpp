/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationFrom.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:30:26 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/28 16:27:00 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("Shrubbery form", 0, 145, 137) {
	std::cout << G << "ShrubberyCreationForm default constructor called" << RE << std::endl;
}

// Comment faire une recopie alors que la classe parente a des attributs prives?

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : AForm(src.getName(), src.getSigned(), src.getGradeToSign(), src.getGradeToExec()) {
	std::cout << G << "ShrubberyCreationForm copy constructor called" << RE << std::endl;

}

void	ShrubberyCreationForm::execute( const Bureaucrat& executor ) {
	(void)executor;
}
