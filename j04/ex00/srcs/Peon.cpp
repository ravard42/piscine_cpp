/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 03:45:23 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 03:57:07 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( void ) : Victim() {
	std::cout << "Peon default constructor called" << std::endl;
}

Peon::Peon( std::string name ) : Victim(name) {
	//std::cout << "Peon parametric constructor called" << std::endl;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const & src ) : Victim(src) {
	//std::cout << "Peon copy constructor called" << std::endl;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon( void ) {
	std::cout << "Bleuark..." << std::endl;
}

Peon &			Peon::operator=( Peon const & src ) {
	this->_name = src.getName();
	return *this;
}

void				Peon::getPolymorphed( void ) const {
	std::cout << this->_name << " has been turned into a pink pony! " << std::endl;
}

std::ostream &		operator<<( std::ostream & o, Peon const & rhs ) {
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
