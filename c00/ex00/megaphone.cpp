/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:07:43 by maraurel          #+#    #+#             */
/*   Updated: 2021/10/28 13:07:49 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	temp;

	if (argc == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
		return (1);
	}
	i = 1;
	while(argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] <= 'z' && argv[i][j] >= 'a')
				temp = (int)argv[i][j] - 32;
			else
				temp = (int)argv[i][j];
			std::cout << (char)temp;
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return  (0);
}
