/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:11:17 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 12:11:17 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		Source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (Source[i] != NULL)
			delete Source[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &p)
{
	for (int i = 0; i < 4; i++)
	{
		if (p.Source[i] != NULL)
			this->Source[i] = p.Source[i]->clone();
		else
			this->Source[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &p)
{
	this->~MateriaSource();
	for (int i = 0; i < 4; i++)
	{
		if (p.Source[i] != NULL)
			this->Source[i] = p.Source[i]->clone();
		else
			this->Source[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;

	while (i < 4)
	{
		if (Source[i] == NULL)
		{
			Source[i] = m;
			return ;
		}
		i++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (Source[i] && Source[i]->getType() == type)
		{
			return (Source[i]->clone());
		}
	}
	return (NULL);
}
