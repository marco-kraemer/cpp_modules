/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 08:47:46 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/04 09:05:14 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICHARACTER_HPP
# define ICHARACTER_HPP
#include "iostream"
#include "AMateria.hpp"
class ICharacter
{
	private:
		AMateria	*invent[4];
		std::string	name;
	public:
	ICharacter();
	ICharacter(std::string name);;
	virtual ~ICharacter() {}
	ICharacter(const ICharacter &p);
	ICharacter& operator=(const ICharacter &p);

	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
