/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:28:59 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 08:55:43 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{}

Animal::~Animal()
{}

Animal& Animal::operator=(const Animal &p)
{
	this->type = p.getType();
	return (*this);
}

Animal::Animal(const Animal &p)
{
	*this = p;
}

std::string const & Animal::getType(void) const
{return (type);}

void		Animal::makeSound(void) const
{
	std::cout << "Animal!" << std::endl;
}
