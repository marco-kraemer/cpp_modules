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

Dog::Dog() : Animal::Animal("Dog")
{
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
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
