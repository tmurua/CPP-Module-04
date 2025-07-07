/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:48:14 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:57:13 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// constructor
Dog::Dog()
{
	type = "Dog";
	std::cout << "[Dog] created" << std::endl;
}

// copy constructor
Dog::Dog(const Dog& other)
	: Animal(other)
{
	std::cout << "[Dog] copy-constructed" << std::endl;
}

// copy assignment operator
Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "[Dog] copy-assigned" << std::endl;
	return *this;
}

// destructor
Dog::~Dog()
{
	std::cout << "[Dog] deleted" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
