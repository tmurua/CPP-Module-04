/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:25:33 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/02 12:32:15 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

// abstract base class: cannot be instantiated
class Animal
{
protected:
	std::string type;

public:
	Animal();                  // constructor
	virtual ~Animal();         // virtual destructor

	std::string getType() const;
	virtual void makeSound() const = 0; // pure virtual
};

#endif
