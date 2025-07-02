/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:25:32 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/02 12:32:43 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: type("Animal")
{
	std::cout << "[Animal] constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

// no Animal::makeSound implementation (pure virtual)
