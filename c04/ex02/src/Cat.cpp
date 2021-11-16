/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:36:03 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 11:36:48 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{
	this->brain = new Brain();
	std::cout << this->type << " got a brain!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
}

Cat& Cat::operator=(const Cat &p)
{
	this->type = p.type;
	this->brain = new Brain(*p.brain);
	return (*this);
}

Cat::Cat(const Cat &p)
{
	*this = p;
}

void		Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (brain);
}