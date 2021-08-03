/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:34:28 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 09:22:03 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &p);
		Cat& operator=(const Cat &p);
		virtual void		makeSound() const;
};

#endif
