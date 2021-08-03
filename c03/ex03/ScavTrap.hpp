/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 09:21:17 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/02 12:10:56 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap &scav);
		ScavTrap(std::string Name);
		ScavTrap& operator=(const ScavTrap &scav);

		virtual void		attack(std::string const & target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);
		virtual void		guardGate();

};

#endif