/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:25:36 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/02 12:35:01 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "[Cat] constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
	: Animal(other)
{
	type = other.type;
	std::cout << "[Cat] copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other) {
		type = other.type;
	}
	std::cout << "[Cat] assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
