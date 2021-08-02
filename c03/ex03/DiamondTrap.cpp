/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:29:34 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/02 12:22:45 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name)
{
	std::cout << "Name DiamondTrap constructor called" << std::endl;
	this->Name = Name;
	Name.append("_clap_name");
	ClapTrap::setName(this->Name);
	ScavTrap::setHitPoints(100);
	FragTrap::setEnergyPoints(50);
	FragTrap::setAttackDamage(30);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &clap)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->Name = clap.Name;
//	this->Hitpoints = clap.Hitpoints;
//	this->EnergyPoints = clap.EnergyPoints;
//	this->AttackDamage = clap.AttackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &clap)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = clap;
}

void	DiamondTrap::attack(std::string const & target)
{
//	std::cout << "DiamondTrap " << this->Name << " attacks " << target << ", causing "
//		<< this->AttackDamage << " points of damage!" << std::endl;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->Name << " took " << amount << " of damage!" << std::endl;
	this->Hitpoints -= amount;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->Name << " received " << amount << " hit points!" << std::endl;
//	this->Hitpoints += amount;
}
