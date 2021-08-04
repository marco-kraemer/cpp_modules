/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:25:12 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/04 11:26:09 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria::AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure &p)
{
	AMateria::operator=(p);
	return (*this);
}

Cure::Cure(const Cure &p)
{
	*this = p;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wouns *" << std::endl;
	AMateria::use(target);
}
