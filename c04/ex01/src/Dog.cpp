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
	std::cout << this->type << " got a brain!" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
}

Dog& Dog::operator=(const Dog &p)
{
	this->~Dog();
	this->brain = new Brain(*p.getBrain());
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

Brain*	Dog::getBrain(void) const
{
	return (brain);
}
