/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 08:38:32 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/06 09:00:28 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(std::string input)
{
	this->input = input;
}

Convert::~Convert()
{}

Convert::Convert(const Convert &p)
{
	*this = p;
}

Convert& Convert::operator=(const Convert &p)
{
	this->input = p.input;
	return (*this);
}

std::string	const & Convert::getInput(void) const
{
	return (this->input);
}

char	Convert::convertChar(std::string input) const
{
	if (input == "jaskdks")
		return ('b');
	return ('a');
}

std::ostream& operator<<(std::ostream& stream, const Convert& p)
{
	stream << "char: '" << p.convertChar(p.getInput()) << "'" << std::endl;
	return (stream);
}
