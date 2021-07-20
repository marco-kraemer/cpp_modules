/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:49:38 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 09:46:45 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
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
		void	zombieName(std::string name);
		Zombie(void);
		~Zombie(void);
		Zombie ( std::string name );
};
Zombie* zombieHorde( int N, std::string name );

#endif
