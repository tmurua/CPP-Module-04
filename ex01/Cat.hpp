/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:35:10 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:43:21 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain; // dynamic Brain

public:
	// constructor
	Cat();

	// copy constructor
	Cat(const Cat& other);

	// copy assignment operator
	Cat& operator=(const Cat& other);

	// destructor
	~Cat();

	void makeSound() const;          // "Meow!"
	Brain* getBrain() const;         // access to brain
};

#endif
