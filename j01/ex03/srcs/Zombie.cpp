/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:49:34 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:48:40 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "A Zombie is born" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " return into the deep ground...fiou" << std::endl;
}

void				Zombie::setType( std::string type ) {
	this->_type = type;
}

void				Zombie::setName( std::string name ) {
	this->_name = name;
}

void				Zombie::announce (void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}
