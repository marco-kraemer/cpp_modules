/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:28:59 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 08:39:52 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Some animal became a " << this->type << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " is gone" << std::endl;
}

Dog& Dog::operator=(const Dog &p)
{
	Animal::operator=(p);
	return (*this);
}

Dog::Dog(const Dog &p)
{
	*this = p;
}

void		Dog::makeSound(void) const
{
	std::cout << "Auuuu!" << std::endl;
}
