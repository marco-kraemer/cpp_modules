/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:25:18 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/10 12:20:34 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP
#define	MUTANTSTACK_HPP
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack
{
	private:
		std::vector<T>	vec;
		int		Size;
		typedef T	type;
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &p);
		MutantStack& operator=(const MutantStack &p);

		typedef typename std::vector<T>::iterator iterator;

		void	push(type element);
		void	pop(type element);
		void	top();
		void	size();
		void	end();
		void	begin();
};

#endif
