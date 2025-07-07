/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:44:11 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:49:19 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

// Dog is an Animal that says "Woof"
class Dog : public Animal
{
public:
	// constructor: sets type to "Dog"
	Dog();

	// copy constructor: creates a new Dog as a copy of another
	Dog(const Dog& other);

	// copy assignment operator: assign one Dog to another (a = b;)
	Dog& operator=(const Dog& other);

	// destructor: announces destruction
	~Dog();

	// make sound: prints dog's sound
	void makeSound() const;
};

#endif
