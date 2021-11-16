/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:10:25 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 13:05:51 by coder            ###   ########.fr       */
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
