/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:31:32 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/08 18:21:42 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// constructor
Brain::Brain()
{
	std::cout << "[Brain] created" << std::endl;
}

// copy constructor
Brain::Brain(const Brain& other)
{
	int i;

	i = 0;
	while (i < 100)
	{
		ideas[i] = other.ideas[i];
		++i;
	}
	std::cout << "[Brain] copy created" << std::endl;
}

// copy assignment operator
Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		int	i;

		i = 0;
		while (i < 100)
		{
			ideas[i] = other.ideas[i];
			++i;
		}
	}
	std::cout << "[Brain] assignment operator called" << std::endl;
	return *this;
}

// destructor
Brain::~Brain()
{
	std::cout << "[Brain] deleted" << std::endl;
}

// get an idea at the given index (0-99)
std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return std::string();
	return ideas[index];
}

// set an idea at the given index (0-99)
void Brain::setIdea(int index, const std::string& idea)
{
	if (index < 0 || index >= 100)
		return;
	ideas[index] = idea;
}
