/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:49:38 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 09:13:30 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_H
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Zombie
{
	private:
		std::string	name;
	public:
		void	announce();
		Zombie(void);
		~Zombie(void);
		Zombie ( std::string name );
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
