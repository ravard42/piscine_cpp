/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 02:46:09 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 03:57:20 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( void ) : Character() {
	std::cout << "Victim default constructor called" << std::endl;
}

Victim::Victim( std::string name ) : Character(name) {
	//std::cout << "Victim parametric constructor called" << std::endl;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim( Victim const & src ) : Character(src) {
	//std::cout << "Victim copy constructor called" << std::endl;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::~Victim( void ) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim &			Victim::operator=( Victim const & src ) {
	this->_name = src.getName();
	return *this;
}

void				Victim::getPolymorphed( void ) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &		operator<<( std::ostream & o, Victim const & rhs ) {
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
