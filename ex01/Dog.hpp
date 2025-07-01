/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:35:05 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 16:38:12 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain; // dynamic Brain

public:
	Dog();                            // constructor
	Dog(const Dog& other);           // copy constructor
	Dog& operator=(const Dog& other); // copy assignment
	~Dog();                           // destructor

	void makeSound() const;          // "Woof!"
	Brain* getBrain() const;         // access to brain
};

#endif
