/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:35:17 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 13:57:48 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{this->type = type;}

void	Weapon::setType(std::string type)
{this->type = type;}

std::string	Weapon::getType(void)
{return (type);}

Weapon::~Weapon()
{}
