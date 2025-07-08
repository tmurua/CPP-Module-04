/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:30:33 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/08 18:20:47 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string ideas[100]; // array of ideas

public:
	// constructor
	Brain();

	// copy constructor for deep copy
	Brain(const Brain& other);

	// copy assignment operator for deep copy
	Brain& operator=(const Brain& other);

	// destructor
	~Brain();

	// get an idea at the given index (0-99)
	std::string getIdea(int index) const;

	// set an idea at the given index (0-99)
	void setIdea(int index, const std::string& idea);
};

#endif
