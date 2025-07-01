/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:35:14 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 17:00:14 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
	std::cout << "[Cat] created" << std::endl;
}

Cat::Cat(const Cat& other)
	: Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "[Cat] copy created" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	Animal::operator=(other);
	if (this != &other) {
		*brain = *other.brain;
	}
	std::cout << "[Cat] assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "[Cat] deleted" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const {
	return brain;
}
