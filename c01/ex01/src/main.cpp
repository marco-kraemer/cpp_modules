/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:47:10 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/03 12:05:32 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int	N = 10;
	
	zombie = zombieHorde(N, "Growlers");
	int i = 0;
	while (i < N)
	{
		zombie[i].announce();
		i++;
	}
	delete [] zombie;
	return (0);
}
