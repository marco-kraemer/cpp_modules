/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 08:38:34 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/06 08:57:04 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
#include <iostream>

class Convert
{
	private:
		std::string	input;
	public:
		Convert();
		Convert(std::string input);
		~Convert();
		Convert(const Convert &p);
		Convert& operator=(const Convert &p);

		char	convertChar(std::string input) const;

		std::string	const & getInput(void) const;
};

std::ostream& operator<<(std::ostream& stream, const Convert& p);

#endif
