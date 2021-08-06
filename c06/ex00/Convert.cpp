/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 08:38:32 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/06 09:34:38 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(std::string input)
{
	this->input = input;
	this->value = atof(input.c_str());
	std::cout << value << std::endl;
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

char	Convert::convertChar() const
{
	char	Char;

	Char = static_cast<char>(this->value);
	if (isnan(this->value) || isinf(this->value))
		throw	ImpossibleException();
	if (Char < 33 || Char > 126)
		throw (NonDisplayableException());
	return (Char);
}

int	Convert::convertInt() const
{
	int	Int;

	Int = static_cast<int>(this->value);
	if (isnan(this->value) || isinf(this->value))
		throw	ImpossibleException();
	return (Int);
}


std::ostream& operator<<(std::ostream& stream, const Convert& p)
{
	stream << "char: '";
	try
	{
		stream << p.convertChar();
	}
	catch (std::exception &e)
	{
		stream << e.what();
	}
	stream << "'" << std::endl;
	stream << "int: ";
	try
	{
		stream << p.convertInt();
	}
	catch (std::exception &e)
	{
		stream << e.what();
	}
	stream << std::endl;
	return (stream);
}
