/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:26:36 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 10:26:37 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{}

Cat::~Cat()
{
}

Cat& Cat::operator=(const Cat &p)
{
	Animal::operator=(p);
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
