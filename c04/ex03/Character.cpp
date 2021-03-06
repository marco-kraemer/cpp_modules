/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:09:02 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 13:17:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		invent[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (invent[i] != NULL)
			delete this->invent[i];
	}	
}

Character::Character(const Character &p)
{
	this->name = p.name;
	for (int i = 0; i < 4; i++)
	{
		if (p.invent[i] != NULL)
			this->invent[i] = p.invent[i]->clone();
		else
			this->invent[i] = NULL;
	}
}

Character& Character::operator=(const Character &p)
{
	this->~Character();
	this->name = p.name;
	for (int i = 0; i < 4; i++)
	{
		if (p.invent[i] != NULL)
			this->invent[i] = p.invent[i]->clone();
		else
			this->invent[i] = NULL;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	int	i = 0;

	while (i < 4)
	{
		if (invent[i] == NULL)
		{
			invent[i] = m;
			return ;
		}
		i++;
	}	
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		invent[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && invent[idx] != NULL)
	{
		invent[idx]->use(target);
	}
	else
	{
		std::cout << this->name << ": you need to learn this skill first!" << std::endl;
	}
}
