/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:51:29 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 14:04:29 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "[Cat] created" << std::endl;
}

Cat::~Cat() {
	std::cout << "[Cat] deleted" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
