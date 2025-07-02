/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:30:33 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 16:30:40 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
private:
	std::string ideas[100]; // array of ideas

public:
	// Constructor
	Brain();

	// Copy constructor for deep copy
	Brain(const Brain& other);

	// Copy assignment operator for deep copy
	Brain& operator=(const Brain& other);

	// Destructor
	~Brain();

	// Get an idea at the given index (0-99)
	std::string getIdea(int index) const;

	// Set an idea at the given index (0-99)
	void setIdea(int index, const std::string& idea);
};

#endif
