/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:39:37 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/06 15:45:14 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T > 
void	swap( T& x, T& y ) {
	T tmp = x;
	x = y;
	y = tmp;
}

template< typename T > 
T const&	min( T const& x, T const& y ) {
	return (x < y ? x : y);
}

template< typename T > 
T const&	max( T const& x, T const& y ) {
	return (x >= y ? x : y);
}

