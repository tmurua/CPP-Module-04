/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:45:25 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:48:18 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

// Cat is an Animal that says "Meow"
class Cat : public Animal
{
public:
	// constructor: sets type to "Cat"
	Cat();

	// copy constructor: creates a new Cat as a copy of another
	Cat(const Cat& other);

	// copy assignment operator: assign one Cat to another (a = b;)
	Cat& operator=(const Cat& other);

	// destructor: announces destruction
	~Cat();

	// make sound: prints cat's sound
	void makeSound() const;
};

#endif
