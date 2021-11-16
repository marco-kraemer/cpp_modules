/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:09:09 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 12:48:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	Character_HPP
# define Character_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*invent[4];
		std::string	name;
		Character();
	
	public:
		Character(std::string name);
		virtual ~Character();
		Character(const Character &p);
		Character& operator=(const Character &p);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
