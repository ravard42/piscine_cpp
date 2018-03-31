/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 02:00:44 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 03:57:47 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ) : Character(), _title("undefined") {
	std::cout << "Sorcerer default constructor called" << std::endl;
}

Sorcerer::Sorcerer( std::string name, std::string title ) : Character(name), _title(title) {
//	std::cout << "Sorcerer parametric constructor called" << std::endl;
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src ) : Character(src) {
//	std::cout << "Sorcerer copy constructor called" << std::endl;
	this->_title = src.getTitle();
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer( void ) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &			Sorcerer::operator=( Sorcerer const & src ) {
	this->_name = src.getName();
	this->_title = src.getTitle();
	return *this;
}

std::string			Sorcerer::getTitle( void ) const {
	return this->_title;
}

void				Sorcerer::polymorph( Victim const & v) const {
	
	//std::cout << this->_name << ", " << this->_title << " lance polymorph sur " << v.getName() << std::endl;
	v.getPolymorphed();
}

std::ostream &		operator<<( std::ostream & o, Sorcerer const & rhs ) {
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
