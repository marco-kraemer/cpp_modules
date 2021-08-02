/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 09:44:33 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/02 11:33:28 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	std::cout << "ScavTrap " << "user3" << " has " << user3.getHitPoints() << " hit points!" << std::endl;
	user3.beRepaired(25);
	std::cout << "ScavTrap " << "user3" << " has " << user3.getHitPoints() << " hit points!" << std::endl;
	user3.guardGate();

	std::cout << "\n\n----------FRAGTRAP EXERCISE----------------\n\n" << std::endl;
	FragTrap	user4("user4");
	std::cout << "FragTrap " << "user4" << " has " << user4.getHitPoints() << " hit points!" << std::endl;
	std::cout << "FragTrap " << "user4" << " has " << user4.getEnergyPoints() << " energy points!" << std::endl;
	std::cout << "FragTrap " << "user4" << " has " << user4.getAttackDamage() << " of attack damage!" << std::endl;
	user3.attack(user4.getName());
	user4.takeDamage(user3.getAttackDamage());
	std::cout << "FragTrap " << "user4" << " has " << user4.getHitPoints() << " hit points!" << std::endl;
	user4.beRepaired(62);
	std::cout << "FragTrap " << "user4" << " has " << user4.getHitPoints() << " hit points!" << std::endl;
	user4.highFivesGuys();
	std::cout << "\n\n----------------------------------------------\n\n" << std::endl;
}
