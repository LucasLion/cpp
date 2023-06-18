/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:39:04 by llion             #+#    #+#             */
/*   Updated: 2023/06/18 19:40:34 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon {

public:
						Weapon(std::string type);
						~Weapon(void);
	std::string const	getType(void);
	void				setType(std::string type);

private:
	std::string	_type;

};
