/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:37:22 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/10 10:08:13 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP
#include <iostream>
#include <vector>

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
