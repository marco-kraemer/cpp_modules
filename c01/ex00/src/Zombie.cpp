/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:47:37 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/03 11:55:36 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie::announce( void )
{std::cout << '<' << name << '>' << "BraiiiiiiinnnzzzZ..." << std::endl;}

Zombie::Zombie () {}

Zombie::Zombie (std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{std::cout << "Zombie " << name << " killed!" << std::endl;}
