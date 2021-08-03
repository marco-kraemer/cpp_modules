/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:34:43 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 14:25:54 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal &p);
		Animal& operator=(const Animal &p);
		
		std::string const & getType(void) const;
		virtual void		makeSound() const = 0; //  Class is abstract if it has at least one pure virtual function. 
};

#endif
