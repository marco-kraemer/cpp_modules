/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:25:14 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/10 13:55:26 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	this->Size = 0;
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &p)
{
	this->vec = p.vec;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack &p)
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
