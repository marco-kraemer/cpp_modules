/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:34:35 by maraurel          #+#    #+#             */
/*   Updated: 2021/12/13 12:21:57 by maraurel         ###   ########.fr       */
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
class MutantStack : public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
		MutantStack()
		{}

		virtual ~MutantStack()
		{}

		MutantStack(const MutantStack<T> &p) : std::stack<T>(p)
		{}

		MutantStack& operator=(const MutantStack &op)
		{
			std::stack<T>::operator=(op);
			return (*this);
		};
			
		iterator	begin()
		{
			return (std::stack<T>::c.begin());
		}

		const_iterator	begin() const
		{
			return (std::stack<T>::c.begin());
		}

		iterator	end()
		{
			return (std::stack<T>::c.end());
		}

		const_iterator	end() const
		{
			return (std::stack<T>::c.end());
		}

		reverse_iterator	rbegin()
		{
			return (std::stack<T>::c.rbegin());
		}

		const_reverse_iterator	rbegin() const
		{
			return (std::stack<T>::c.rbegin());
		}

		reverse_iterator	rend()
		{
			return (std::stack<T>::c.rend());
		}

		const_reverse_iterator	rend() const
		{
			return (std::stack<T>::c.rend());
		}

};

#endif
