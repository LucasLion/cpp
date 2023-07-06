/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:11:23 by llion             #+#    #+#             */
/*   Updated: 2023/07/06 16:03:16 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

#include <iomanip>
#include <iostream>

class HarlFilter {

public:
								HarlFilter();
								~HarlFilter();
	void						complain( std::string level );

private:
	typedef void				(HarlFilter::*funcPtr)( void );
	std::pair<int, std::string>	functions[4];
	void						debug( void );
	void						info( void );
	void						warning( void );
	void						error( void );
	void						null( void );
};

#endif
