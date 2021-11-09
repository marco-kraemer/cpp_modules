/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:46:02 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/09 11:46:04 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	Name = "";
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 10;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Name ClapTrap constructor called" << std::endl;
	this->Name = Name;
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->Name = clap.Name;
	this->Hitpoints = clap.Hitpoints;
	this->EnergyPoints = clap.EnergyPoints;
	this->AttackDamage = clap.AttackDamage;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
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

std::string	ClapTrap::getName(void) const
{
	return (this->Name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->Hitpoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->EnergyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->AttackDamage);
}

void		ClapTrap::setHitPoints(int const value)
{
	Hitpoints = value;
}
void		ClapTrap::setEnergyPoints(int const value)
{
	EnergyPoints = value;
}

void		ClapTrap::setAttackDamage(int const value)
{
	AttackDamage = value;
}
