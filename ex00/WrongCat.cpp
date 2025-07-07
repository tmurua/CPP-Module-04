/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:23:46 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:59:01 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// constructor
WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "[WrongCat] created" << std::endl;
}

// copy constructor
WrongCat::WrongCat(const WrongCat& other)
	: WrongAnimal(other)
{
	std::cout << "[WrongCat] copy-constructed" << std::endl;
}

// copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		WrongAnimal::operator=(other);
	std::cout << "[WrongCat] copy-assigned" << std::endl;
	return *this;
}

// destructor
WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] deleted" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow? <I can't say meow!>" << std::endl;
}
