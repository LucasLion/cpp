/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:30:26 by llion@student     #+#    #+#             */
/*   Updated: 2023/08/29 14:09:16 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("Shrubbery form", 0, 145, 137) {
	std::cout << G << "ShrubberyCreationForm default constructor called" << RE << std::endl;
}

// Comment faire une recopie alors que la classe parente a des attributs prives?

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : AForm(src.getName(), src.getSigned(), src.getGradeToSign(), src.getGradeToExec()) {
	std::cout << G << "ShrubberyCreationForm copy constructor called" << RE << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << R << "ShrubberyCreationForm destructor called" << RE << std::endl;
}

void	ShrubberyCreationForm::execute( const Bureaucrat& executor ) {
	(void)executor;
	const char	tree[][18] = {
		{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
		{0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0},
		{0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
		{0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
		{0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
		{0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
		{0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
		{0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
		{0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
		{0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0}
	};

	std::cout << std::endl;
	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 18; j++) {
			if (tree[i][j] == 1)
				 putchar('*');
			else
				 putchar(' ');
		}
		std::cout << std::endl;
	}

}
