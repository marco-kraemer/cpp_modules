/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:47:10 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/03 12:02:06 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = newZombie("Growlers");
	zombie->announce();
	randomChump("zumbi");
	delete	(zombie);
	return (0);
}
