/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:31:59 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/02 09:12:59 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	user1("user1");
	ClapTrap	user2("user2");

	user1.attack("user2");
	user2.takeDamage(10);
	user2.beRepaired(2);
	user2.attack("user1");
	user1.takeDamage(10);
	user1.beRepaired(1);
}
