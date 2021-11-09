/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:55:31 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/09 11:55:31 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	Name = "";
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "Name FragTrap constructor called" << std::endl;
	this->Name = Name;
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &clap)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->Name = clap.Name;
	this->Hitpoints = clap.Hitpoints;
	this->EnergyPoints = clap.EnergyPoints;
	this->AttackDamage = clap.AttackDamage;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &clap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = clap;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing "
		<< this->AttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->Name << " took " << amount << " of damage!" << std::endl;
	this->Hitpoints -= amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << this->Name << " received " << amount << " hit points!" << std::endl;
	this->Hitpoints += amount;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << Name << ": High Five!!!" << std::endl;
}
