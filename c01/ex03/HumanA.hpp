/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:39:12 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 10:44:30 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class HumanA
{
private:
	std::string	Weapon;
	std::string	Name;
public:
	void	attack(std::string Weapon, std::string Name);
	HumanA();
	~HumanA();
};
