/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:35:10 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/08 18:25:06 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

// Cat is an Animal that says "Meow"
class Cat : public Animal
{
private:
	Brain* brain; // dynamic Brain

public:
	// constructor: sets type to "Cat"
	Cat();

	// copy constructor: creates a new Cat as a copy of another
	Cat(const Cat& other);

	// copy assignment operator: assign one Cat to another (a = b;)
	Cat& operator=(const Cat& other);

	// destructor: announces destruction
	~Cat();

	void makeSound() const;		// "Meow!"
	Brain* getBrain() const;	// access to brain
};

#endif
