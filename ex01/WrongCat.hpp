/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:21:46 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:52:25 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

// WrongCat attempts to override makeSound but base method is non-virtual
class WrongCat : public WrongAnimal
{
public:
	// constructor: sets type to "WrongCat"
	WrongCat();

	// copy constructor: creates a new WrongCat as a copy of another
	WrongCat(const WrongCat& other);

	// copy assignment operator: assign one WrongCat to another (a = b;)
	WrongCat& operator=(const WrongCat& other);

	// destructor: announces destruction
	~WrongCat();

	// attempted override: will instead call WrongAnimal::makeSound()
	void makeSound() const;
};

#endif
