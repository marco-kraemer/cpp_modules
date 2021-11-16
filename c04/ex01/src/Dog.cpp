/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:36:09 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 11:39:12 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
	this->brain = new Brain();
	std::cout << this->type << " got a brain!" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
}

Dog& Dog::operator=(const Dog &p)
{
	this->type = p.type;
	this->brain = new Brain(*p.brain);
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

Brain*	Dog::getBrain(void) const
{
	return (brain);
}
