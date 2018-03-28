/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 00:59:37 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:59:37 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon( void ) {
	std::cout << "Weapon destructor called" << std::endl;
}

std::string  const 	&Weapon::getType( void ) const {
	return this->_type;
}

void 	 			Weapon::setType( std::string type) {
	this->_type = type;	
};
