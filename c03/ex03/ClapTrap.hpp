/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:01:37 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/09 12:01:39 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string	Name;
		int		Hitpoints;
		int		EnergyPoints;
		int		AttackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		~ClapTrap();
		ClapTrap(const ClapTrap &clap);
		ClapTrap& operator=(const ClapTrap &clap);
		
		virtual void		attack(std::string const & target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);

		std::string	getName(void) const;
		int		getHitPoints(void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;

		void		setHitPoints(int const value);
		void		setEnergyPoints(int const value);
		void		setAttackDamage(int const value);
		void		setName(std::string Name);
};

#endif
