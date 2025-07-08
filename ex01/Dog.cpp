/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:35:08 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/08 19:17:45 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// constructor
Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "[Dog] created" << std::endl;
}

// copy constructor
Dog::Dog(const Dog& other)
	: Animal(other)
{
	brain = new Brain(*other.brain);	// deep copy
	std::cout << "[Dog] copy created" << std::endl;
}

// copy assignment operator
Dog& Dog::operator=(const Dog& other)
{
	Animal::operator=(other);
	if (this != &other) {
		*brain = *other.brain;			// deep copy into existing brain
	}
	std::cout << "[Dog] assignment operator called" << std::endl;
	return *this;
}

// destructor
Dog::~Dog()
{
	delete brain;
	std::cout << "[Dog] deleted" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return brain;
}
