/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:35:21 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 16:51:29 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const int size = 4;
	Animal* animals[size];
	int i;

	// fill half with Dogs, half with Cats
	i = 0;
	while (i < size)
	{
		if (i < size/2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		++i;
	}

	// test deep copies
	Dog* originalDog = new Dog();
	originalDog->getBrain()->setIdea(0, "Give me the ball! Give me the Ball!");
	Dog copyDog = *originalDog;
	std::cout << "Original Dog Brain[0]: "
			<< originalDog->getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Dog Brain[0]: "
			<< copyDog.getBrain()->getIdea(0) << std::endl;

	// clean up
	delete originalDog;

	// delete array of animals
	i = 0;
	while (i < size)
	{
		delete animals[i];
		++i;
	}

	return 0;
}
