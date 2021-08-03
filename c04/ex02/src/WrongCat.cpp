/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 09:16:07 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 09:52:35 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat")
{
}

WrongCat::~WrongCat()
{
}

WrongCat& WrongCat::operator=(const WrongCat &p)
{
	WrongAnimal::operator=(p);
	return (*this);
}

WrongCat::WrongCat(const WrongCat &p)
{
	*this = p;
}

void		WrongCat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}
