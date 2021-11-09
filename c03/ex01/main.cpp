/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:46:20 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/09 11:46:20 by maraurel         ###   ########.fr       */
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
	std::cout << "ScavTrap " << "user3" << " has " << user3.getHitPoints() << " hit points!" << std::endl;
	std::cout << "ScavTrap " << "user3" << " has " << user3.getEnergyPoints() << " energy points!" << std::endl;
	std::cout << "ScavTrap " << "user3" << " has " << user3.getAttackDamage() << " of attack damage!" << std::endl;
	user1.attack(user3.getName());
	user3.takeDamage(user1.getAttackDamage());
	user3.beRepaired(25);
	std::cout << "ScavTrap " << "user3" << " has " << user3.getHitPoints() << " hit points!" << std::endl;
	user3.guardGate();

	std::cout << "\n\n----------------------------------------------\n\n" << std::endl;
}
