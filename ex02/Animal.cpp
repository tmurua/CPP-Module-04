/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:42:32 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/08 20:35:36 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// default constructor
Animal::Animal()
	: type("Animal")
{
	std::cout << "[Animal] created" << std::endl;
}

// copy constructor
Animal::Animal(const Animal& other)
	: type(other.type)
{
	std::cout << "[Animal] copy-constructed" << std::endl;
}

// copy assignment operator
Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "[Animal] copy-assigned" << std::endl;
	return *this;
}

// virtual destructor
Animal::~Animal()
{
	std::cout << "[Animal] deleted" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

// no implementation for Animal::makeSound() here; it's pure virtual
