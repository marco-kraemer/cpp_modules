/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:31:59 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/02 09:08:29 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	user1("user1");
	ClapTrap	user2("user2");

	user1.attack("user3");
	user1.takeDamage(5);
	user1.beRepaired(10);
	user2.attack("user4");
	user2.takeDamage(3);
	user2.beRepaired(25); 
}
