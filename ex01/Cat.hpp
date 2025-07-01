/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:35:10 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 16:41:07 by tmurua           ###   ########.fr       */
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
	Cat();                            // constructor
	Cat(const Cat& other);           // copy constructor
	Cat& operator=(const Cat& other); // copy assignment
	~Cat();                           // destructor

	void makeSound() const;          // "Meow!"
	Brain* getBrain() const;         // access to brain
};

#endif
