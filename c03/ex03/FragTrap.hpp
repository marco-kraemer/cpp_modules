/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:02:08 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/09 12:12:33 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &flag);
		FragTrap(std::string Name);
		FragTrap& operator=(const FragTrap &flag);

		virtual void		attack(std::string const & target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);

		void highFivesGuys(void);
};

#endif
