/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:11:03 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 13:19:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	std::cout << "me: ";
	me->use(0, *bob);
	std::cout << "me: ";
	me->use(1, *bob);

	me->use(2, *bob);

	tmp = src->createMateria("cure");
	bob->equip(tmp);

	std::cout << "bob: ";
	bob->use(0, *me);

	tmp = src->createMateria("ice");
	bob->equip(tmp);

	std::cout << "bob: ";
	bob->use(1, *me);

	bob->unequip(0);
	bob->use(0, *me);
	bob->use(10, *me);
		
	delete bob;
	delete me;
	delete src;

	return 0;
}
