/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 09:44:33 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/02 09:46:51 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n\n----------ClapTrap EXERCISE----------------\n\n" << std::endl;
	ClapTrap	user1("user1");
	ClapTrap	user2("user2");

	user1.attack("user2");
	user2.takeDamage(10);
	user2.beRepaired(2);
	user2.attack("user1");
	user1.takeDamage(10);
	user1.beRepaired(1);

	std::cout << "\n\n----------SCAVTRAP EXERCISE----------------\n\n" << std::endl;
	ScavTrap	user3("user3");
}
