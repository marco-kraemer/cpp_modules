/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 08:47:43 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/04 09:05:02 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{}

ICharacter::ICharacter(std::string name)
{
	this->name = name;
}

ICharacter::~ICharacter()
{}

ICharacter::ICharacter(const ICharacter &p)
{
	*this = p;
}

ICharacter& ICharacter::operator=(const ICharacter &p)
{
	for (int i = 0; i < 4; i++)
		this->invent[i] = p.invent[i];
	return (*this);
}

std::string const & ICharacter::getName() const
{
	return (name);
}

void ICharacter::equip(AMateria* m)
{
	int	i = 0;

	while (invent[i])
		i++;
	
	if (i == 4)
		return ;
	invent[i] = m;
}

void ICharacter::unequip(int idx)
{

}

void ICharacter::use(int idx, ICharacter& target)
{
	
}
