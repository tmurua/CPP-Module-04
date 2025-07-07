/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:51:29 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:56:32 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// constructor
Cat::Cat()
{
	type = "Cat";
	std::cout << "[Cat] created" << std::endl;
}

// copy constructor
Cat::Cat(const Cat& other)
	: Animal(other)  // call base copy constructor
{
	std::cout << "[Cat] copy-constructed" << std::endl;
}

// copy assignment operator
Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "[Cat] copy-assigned" << std::endl;
	return *this;
}

// destructor
Cat::~Cat()
{
	std::cout << "[Cat] deleted" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
