/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:52:36 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 14:17:02 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "--- Correct polymorphism ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl; // will output the class "Dog"
	std::cout << i->getType() << " " << std::endl; // will output the class "Cat"
	i->makeSound(); // will output the cat sound
	j->makeSound(); // will output the dog sound
	meta->makeSound(); // will output a generic animal sound

	delete meta;
	delete j;
	delete i;

	std::cout << "\n--- Incorrect polymorphism (no virtual) ---" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << wc->getType() << " " << std::endl; // will output the class "WrongCat"
	wc->makeSound(); // WrongAnimal sound, not WrongCat
	wmeta->makeSound();

	delete wmeta;
	delete wc;

	return 0;
}
