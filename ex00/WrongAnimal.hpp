/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:18:09 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 13:52:26 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string type;

public:
	// Default constructor
	WrongAnimal();

	// Destructor
	~WrongAnimal();

	// Return type
	std::string getType() const;

	// Non-virtual makeSound
	void makeSound() const;
};

#endif
