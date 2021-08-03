/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:23:39 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/03 12:59:05 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	Animal	*animals[20];

	// Create animals
	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	// Set animals[1] idea
	for (int i = 0; i < 100; i++)
		((Dog *)animals[1])->getBrain()->setIdea("a");

	// Create deep copy
	Animal *CopyDog = new Dog (*(Dog *)animals[1]);

	// Show ideas;
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Orignal: " << ((Dog *)animals[1])->getBrain()->getIdea(i) << "   Copy:"
		<< ((Dog *)CopyDog)->getBrain()->getIdea(i) << std::endl;
	}
	// Delete animals
	for (int i = 0; i < 20; i++)
	{
		delete animals[i];
	}
}
