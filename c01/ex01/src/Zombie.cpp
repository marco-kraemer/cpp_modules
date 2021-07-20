/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:47:37 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 09:47:48 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie::announce( void )
{std::cout << '<' << name << '>' << "BraiiiiiiinnnzzzZ..." << std::endl;}

void	Zombie::zombieName( std::string name )
{this->name = name;}

Zombie::Zombie () {}

Zombie::Zombie (std::string name)
{this->name = name;}

Zombie::~Zombie()
{std::cout << "Zombie killed!" << std::endl;}
