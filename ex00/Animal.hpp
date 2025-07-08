/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:38:37 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/08 17:52:03 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

// base class for all animals
class Animal
{
protected:
	std::string type; // species/type name

public:
	// default constructor: initializes type to "Animal"
	Animal();

	// copy constructor: creates a new Animal as a copy of another
	Animal(const Animal& other);

	// copy assignment operator: assign one Animal to another (a = b;)
	Animal& operator=(const Animal& other);

	// virtual destructor: ensures derived destructors are called
	virtual ~Animal();

	// return the type of the animal
	std::string getType() const;

	// make sound: can be overridden by derived classes
	virtual void makeSound() const;
};

#endif
