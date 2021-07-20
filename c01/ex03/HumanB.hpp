/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:41:29 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 10:44:09 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class HumanB
{
private:
	std::string	Weapon;
	std::string	Name;
public:
	void	attack(std::string Weapon, std::string Name);
	HumanB(/* args */);
	~HumanB();
};

