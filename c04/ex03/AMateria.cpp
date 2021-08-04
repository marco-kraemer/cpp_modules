/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 08:32:23 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/04 08:41:35 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria &p)
{
	*this = p;
}

AMateria& AMateria::operator=(const AMateria &p)
{
	this->type = p.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

