/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:04:48 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/30 11:04:48 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(const std::string input)
{
	this->input = input;
	this->value = atof(input.c_str());
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

double	const & Convert::getValue(void) const
{
	return (value);
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

	if (this->value > INT_MAX || this->value < INT_MIN || isnan(this->value) || isinf(this->value))
		throw	ImpossibleException();
	Int = static_cast<int>(this->value);
	return (Int);
}

float	Convert::convertFloat() const
{
	float	Float;

	Float = static_cast<float>(this->value);
	return (Float);
}

double	Convert::convertDouble() const
{
	double	Double;

	Double = static_cast<float>(this->value);
	return (Double);
}


std::ostream& operator<<(std::ostream& stream, const Convert& p)
{
	float	floatValue = p.getValue();
	int	intValue = static_cast<int>(floatValue);

	stream << "char: ";
	try
	{
		char Char = p.convertChar();
		stream << "'" << Char << "'";
	}
	catch (std::exception &e)
	{
		stream << e.what();
	}

	stream << std::endl;
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
	stream << "float: ";
	try
	{
		stream << p.convertFloat();
		if (floatValue - intValue != 0)
			stream << "f";
		else
			stream << ".0f";
	}
	catch (std::exception &e)
	{
		stream << e.what();
	}


	stream << std::endl;
	stream << "Double: ";
	try
	{
		stream << p.convertDouble();
		if (floatValue - intValue == 0)
			stream << ".0";
	}
	catch (std::exception &e)
	{
		stream << e.what();
	}
	return (stream);
}

const char* Convert::NonDisplayableException::what() const noexcept
{
	return "Non displayable";
}

const char* Convert::ImpossibleException::what() const noexcept
{
	return "Impossible";
}
