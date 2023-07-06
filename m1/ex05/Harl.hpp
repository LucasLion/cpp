/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:11:23 by llion             #+#    #+#             */
/*   Updated: 2023/07/06 14:59:26 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iomanip>
#include <iostream>

class Harl {

public:
									Harl();
									~Harl();
	void							complain( std::string level );

private:
	typedef void					(Harl::*funcPtr)( void );
	std::pair<std::string, funcPtr>	functions[4];
	void							debug( void );
	void							info( void );
	void							warning( void );
	void							error( void );
};

#endif
