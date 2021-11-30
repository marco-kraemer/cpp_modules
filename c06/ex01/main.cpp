/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:12:12 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/30 11:26:02 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data{
	int		Value1;
	float		Value2;
	std::string	string1;
	std::string	string2;
}	data;

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data*		deserialize(uintptr_t raw)
{
	Data	*data;

	data = reinterpret_cast<Data*>(raw);
	return (data);
}

int	main(void)
{
	uintptr_t	serialized;
	Data	*data = new Data;

	{
		data->string1 = "teste";
		data->string2 = "42";
		data->Value1 = 21;
		data->Value2 = 42.42;
		serialized = serialize(data);
	}
	{
		Data	*data2;
		
		data2 = deserialize(serialized);
		std::cout << data2->string1 << std::endl;
		std::cout << data2->string2 << std::endl;
		std::cout << data2->Value1 << std::endl;
		std::cout << data2->Value2 << std::endl;
	}
	delete data;
}
