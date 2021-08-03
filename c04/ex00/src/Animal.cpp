/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:28:59 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 09:08:16 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->type = "Some animal";
	std::cout << this->type << " was raised" << std::endl;
}

Animal::~Animal()
{
	std::cout << this->type << " is gone" << std::endl;
}

Animal& Animal::operator=(const Animal &p)
{
	this->type = p.getType();
	std::cout << p.getType() << "aaa" << std::endl;
	return (*this);
}

Animal::Animal(const Animal &p)
{
	*this = p;
}

std::string const & Animal::getType(void) const
{return (this->type);}

void		Animal::makeSound(void) const
{
	std::cout << "Animal!" << std::endl;
}
