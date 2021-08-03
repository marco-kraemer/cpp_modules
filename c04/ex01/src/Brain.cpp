/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:23:51 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 13:00:35 by maraurel         ###   ########.fr       */
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

void		Brain::setIdea(std::string idea, int i)
{
	if (i > 100)
		return ;
	ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	return (ideas[i]);
}
