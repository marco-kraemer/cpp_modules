/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:47:29 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/09 11:51:58 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->Name = "";
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "Name ScavTrap constructor called" << std::endl;
	this->Name = Name;
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing "
		<< this->AttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->Name << " took " << amount << " of damage!" << std::endl;
	this->Hitpoints -= amount;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << this->Name << " received " << amount << " hit points!" << std::endl;
	this->Hitpoints += amount;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " have enterred in Gate keeper mode!" << std::endl;
}
