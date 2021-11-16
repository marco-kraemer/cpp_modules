/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:36:19 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/16 11:37:14 by maraurel         ###   ########.fr       */
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
		((Dog *)animals[1])->getBrain()->setIdea("a", i);

	// Create deep copy
	Animal *CopyDog;
	
	CopyDog = new Dog (*(Dog *)animals[1]);
	
	// Show ideas;
	std::cout << "\n\nShow ideas from animals[1] and CopyDog: " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Orignal: " << ((Dog *)animals[1])->getBrain()->getIdea(i) << "   Copy:"
		<< ((Dog *)CopyDog)->getBrain()->getIdea(i) << std::endl;
	}

	std::cout << "\n\nShow ideas after change CopyDog ideas: " << std::endl;
	for (int i = 0; i < 100; i++)
		((Dog *)CopyDog)->getBrain()->setIdea("b", i);
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Orignal: " << ((Dog *)animals[1])->getBrain()->getIdea(i) << "   Copy:"
		<< ((Dog *)CopyDog)->getBrain()->getIdea(i) << std::endl;
	}
	// Delete animals
	for (int i = 0; i < 20; i++)
	{
		delete animals[i];
	}
	delete CopyDog;
}
