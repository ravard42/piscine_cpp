/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 01:02:13 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 01:15:06 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &w ) : _name(name), _w(w) {
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "HumanA destructor called" << std::endl;
}

void				HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << this->_w.getType() << std::endl;
}
