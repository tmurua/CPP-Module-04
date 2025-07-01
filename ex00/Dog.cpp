/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:48:14 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 14:04:12 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "[Dog] created" << std::endl;
}

Dog::~Dog() {
	std::cout << "[Dog] deleted" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
