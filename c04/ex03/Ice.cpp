/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:10:36 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 13:05:47 by coder            ###   ########.fr       */
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
