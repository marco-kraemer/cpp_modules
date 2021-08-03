/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:34:31 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 09:22:07 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class Dog : virtual public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &p);
		Dog& operator=(const Dog &p);
		virtual void		makeSound() const;
};

#endif
