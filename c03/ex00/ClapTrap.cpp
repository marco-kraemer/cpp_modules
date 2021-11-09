/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:39:42 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/09 11:39:43 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	Name = "";
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 10;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Name constructor called" << std::endl;
	this->Name = Name;
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "Assignation operator called" << std::endl;
	this->Name = clap.Name;
	this->Hitpoints = clap.Hitpoints;
	this->EnergyPoints = clap.EnergyPoints;
	this->AttackDamage = clap.AttackDamage;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clap;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing "
		<< this->AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " took " << amount << " of damage!" << std::endl;
	this->Hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " received " << amount << " hit points!" << std::endl;
	this->Hitpoints += amount;
}
