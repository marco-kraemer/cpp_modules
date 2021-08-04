/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:06:42 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/04 10:24:11 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria::AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice &p)
{
	AMateria::operator=(p);
	return (*this);
}

Ice::Ice(const Ice &p)
{
	*this = p;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
