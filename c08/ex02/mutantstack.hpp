/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:34:35 by maraurel          #+#    #+#             */
/*   Updated: 2021/12/06 11:35:10 by maraurel         ###   ########.fr       */
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
		typedef T	type;
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack<T> &p);
		MutantStack& operator=(const MutantStack<T> &p);

		typedef typename std::vector<T>::iterator iterator;

		void	push(type element);
		void	pop();
		T&	top();
		int	size();
		iterator	end();
		iterator	begin();
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &p)
{
	this->vec = p.vec;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T> &p)
{
	this->vec = p.vec;
	return (*this);
}

template <typename T>
void	MutantStack<T>::push(type element)
{
	this->vec.push_back(element);
}

template <typename T>
void	MutantStack<T>::pop()
{
	this->vec.pop_back();
}

template <typename T>
T&	MutantStack<T>::top()
{
	return (this->vec.back());
}

template <typename T>
int	MutantStack<T>::size()
{
	return (this->vec.size());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->vec.end());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->vec.begin());
}


#endif
