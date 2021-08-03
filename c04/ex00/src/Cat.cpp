/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:28:59 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 08:39:52 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Some animal became a " << this->type << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << " is gone" << std::endl;
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
