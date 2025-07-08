/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:20:05 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:57:52 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// default constructor
WrongAnimal::WrongAnimal()
	: type("WrongAnimal")
{
	std::cout << "[WrongAnimal] created" << std::endl;
}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other)
	: type(other.type)
{
	std::cout << "[WrongAnimal] copy-constructed" << std::endl;
}

// copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "[WrongAnimal] copy-assigned" << std::endl;
	return *this;
}

// destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] deleted" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "<generic wrong animal sound>" << std::endl;
}
