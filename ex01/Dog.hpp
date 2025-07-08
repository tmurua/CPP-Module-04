/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:35:05 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/08 18:24:47 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

// Dog is an Animal that says "Woof"
class Dog : public Animal
{
private:
	Brain* brain; // dynamic Brain

public:
	// constructor
	Dog();

	// copy constructor
	Dog(const Dog& other);

	// copy assigment operator
	Dog& operator=(const Dog& other);

	// destructor
	~Dog();

	void makeSound() const;		// "Woof!"
	Brain* getBrain() const;	// access to brain
};

#endif
