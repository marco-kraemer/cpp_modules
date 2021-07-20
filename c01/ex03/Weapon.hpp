/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:35:40 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 10:39:01 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define ZOMBIE_HPP
#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	~Weapon();
	std::string	getType(std::string type);
	void		setType(std::string type);
};


#endif
