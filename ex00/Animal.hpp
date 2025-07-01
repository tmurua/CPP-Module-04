/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:38:37 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 13:49:41 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
	std::string type;

public:
	// Default constructor
	Animal();

	// Virtual destructor
	virtual ~Animal();

	// Return the type of the animal
	std::string getType() const;

	// Make sound: to be overridden by derived classes
	virtual void makeSound() const;
};

#endif
