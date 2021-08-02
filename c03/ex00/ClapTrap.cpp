/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:31:26 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/02 08:48:10 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
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
}
