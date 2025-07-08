/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:18:09 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/08 18:07:26 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

// base class without virtual makeSound
class WrongAnimal
{
protected:
	std::string type; // species/type name

public:
	// default constructor: sets type to "WrongAnimal"
	WrongAnimal();

	// copy constructor: creates a new WrongAnimal as a copy of another
	WrongAnimal(const WrongAnimal& other);

	// copy assignment operator: assign one WrongAnimal to another (a = b;)
	WrongAnimal& operator=(const WrongAnimal& other);

	// destructor: announces destruction
	~WrongAnimal();

	// return the type of the wrong animal
	std::string getType() const;

	// make sound: not virtual, demonstrates lack of polymorphism
	void makeSound() const;
};

#endif
