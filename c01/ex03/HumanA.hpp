/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:39:12 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 11:02:21 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		*weapon;
	std::string	name;
public:
	void	attack(std::string Weapon, std::string Name);
	HumanA(std::string name);
	~HumanA();
};

#endif
