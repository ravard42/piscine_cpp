/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:49:34 by ravard            #+#    #+#             */
/*   Updated: 2018/03/27 23:24:22 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : _type(type),
														_name(name) {
	std::cout << "A Zombie is born" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " return into the deep ground...fiou" << std::endl;
}

void				Zombie::announce (void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}
