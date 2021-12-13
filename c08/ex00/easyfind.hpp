/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:55:35 by maraurel          #+#    #+#             */
/*   Updated: 2021/12/13 11:31:52 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
#define	EASYFIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>

class	notFoundException : public std::exception
{
	const char* what() const noexcept override
	{
		return "Integer not found.";
	}
};

template < template < typename , typename> class T>
typename T<int, std::allocator<int> >::iterator	easyfind(T<int, std::allocator<int> > &a, int b)
{
	 typename T<int, std::allocator<int> >::iterator it;
	if ((it = std::find(a.begin(), a.end(), b)) != a.end())
	{
		return (it);
	}
	throw notFoundException();
}

#endif
