/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 10:35:50 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/02 10:39:14 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	std::cout << "Default FlagTrap constructor called" << std::endl;
	Name = "";
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

FlagTrap::FlagTrap(std::string Name)
{
	std::cout << "Name FlagTrap constructor called" << std::endl;
	this->Name = Name;
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap destructor called" << std::endl;
}

FlagTrap& FlagTrap::operator=(const FlagTrap &clap)
{
	std::cout << "FlagTrap assignation operator called" << std::endl;
	this->Name = clap.Name;
	this->Hitpoints = clap.Hitpoints;
	this->EnergyPoints = clap.EnergyPoints;
	this->AttackDamage = clap.AttackDamage;
	return (*this);
}

FlagTrap::FlagTrap(const FlagTrap &clap)
{
	std::cout << "FlagTrap copy constructor called" << std::endl;
	*this = clap;
}

void	FlagTrap::attack(std::string const & target)
{
	std::cout << "FlagTrap " << this->Name << " attacks " << target << ", causing "
		<< this->AttackDamage << " points of damage!" << std::endl;
}

void	FlagTrap::takeDamage(unsigned int amount)
{
	std::cout << "FlagTrap " << this->Name << " took " << amount << " of damage!" << std::endl;
	this->Hitpoints -= amount;
}

void	FlagTrap::beRepaired(unsigned int amount)
{
	std::cout << "FlagTrap " << this->Name << " received " << amount << " hit points!" << std::endl;
	this->Hitpoints += amount;
}
