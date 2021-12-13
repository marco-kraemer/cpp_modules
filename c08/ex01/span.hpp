/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:08:24 by maraurel          #+#    #+#             */
/*   Updated: 2021/12/13 11:50:38 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	vs;
		unsigned int 		size;
		Span();
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &p);
		Span& operator=(const Span &p);

		void	addNumber(int num);
		int	shortestSpan();
		int	longestSpan();

		template <class Iterator>
		void	addNumber(Iterator begin, Iterator end)
		{
			if (end - begin <= size)
				std::copy(begin, end, std::back_inserter(this->vs));
			else
			{
				throw(limitException());
			}
		}
	
		class	limitException : public std::exception
		{
			const char* what() const noexcept override
			{
				return "Maximum capacity reached.";
			}
		};
		class	noSpanException : public std::exception
		{
			const char* what() const noexcept override
			{
				return "Need at least 2 elements to find a span.";
			}
		};
};

#endif
