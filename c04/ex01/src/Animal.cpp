/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:35:51 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 10:35:52 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->type = "Some animal";
	std::cout << this->type << " was raised!" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << type << " was raised!" << std::endl;
}

Animal::~Animal()
{
	std::cout << this->type << " is gone" << std::endl;
}

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
{return (this->type);}

void		Animal::makeSound(void) const
{
	std::cout << "Animal!" << std::endl;
}
