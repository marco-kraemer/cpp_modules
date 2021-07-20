/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:38:29 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 09:50:41 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie *newZombies;
	int	i;

	newZombies = new Zombie[N];
	i = 0;
	while (i < N)
	{
		newZombies[i].zombieName(name);
		i++;
	}
	return (newZombies);
}
