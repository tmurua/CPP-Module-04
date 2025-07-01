/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:23:46 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/01 14:05:48 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "[WrongCat] created" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "[WrongCat] deleted" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow? <I can't say meow!>" << std::endl;
}
