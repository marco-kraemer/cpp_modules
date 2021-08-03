/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:23:51 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 12:35:57 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

Brain& Brain::operator=(const Brain &p)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = p.getIdea(i);
	return (*this);
}

Brain::Brain(const Brain &p)
{
	*this = p;
}

void		Brain::setIdea(std::string idea)
{
	static int	i;

	ideas[i] = idea;
	i++;
	if (i == 100)
		i = 0;
}

std::string	Brain::getIdea(int i) const
{
	return (ideas[i]);
}
