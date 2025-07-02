/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:25:39 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/02 12:34:27 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "[Dog] constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
	: Animal(other)
{
	type = other.type;
	std::cout << "[Dog] copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other) {
		type = other.type;
	}
	std::cout << "[Dog] assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
