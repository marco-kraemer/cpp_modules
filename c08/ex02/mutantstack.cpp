/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:25:14 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/10 12:14:34 by maraurel         ###   ########.fr       */
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
{}

template <typename T>
void	MutantStack<T>::pop(type element)
{}

template <typename T>
void	MutantStack<T>::top()
{}

template <typename T>
void	MutantStack<T>::size()
{}

template <typename T>
void	MutantStack<T>::end()
{}

template <typename T>
void	MutantStack<T>::begin()
{}
