/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:34:31 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 09:59:35 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &p);
		Dog& operator=(const Dog &p);
		virtual void		makeSound() const;
};

#endif
