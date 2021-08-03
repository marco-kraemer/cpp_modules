/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 09:42:31 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 13:00:10 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &p);
		Brain& operator=(const Brain &p);
		
		void		setIdea(std::string, int i);
		std::string	getIdea(int i) const;
};

#endif
