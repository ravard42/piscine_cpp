/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 01:09:35 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 01:15:05 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB( void ) {
	std::cout << "HumanB destructor called" << std::endl;
}

void				HumanB::setWeapon(Weapon &w) {
	this->_w = &w;
}

void				HumanB::attack() const {
	std::cout << this->_name << " attacks with his " << this->_w->getType() << std::endl;
}
