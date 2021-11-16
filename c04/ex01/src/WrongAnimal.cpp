/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:36:24 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 10:36:25 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Some WrongAnimal";
	std::cout << this->type << " was raised!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << this->type << " was raised!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " is gone" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &p)
{
	this->type = p.getType();
	std::cout << p.getType() << "aaa" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &p)
{
	*this = p;
}

std::string const & WrongAnimal::getType(void) const
{return (this->type);}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Sound!" << std::endl;
}
