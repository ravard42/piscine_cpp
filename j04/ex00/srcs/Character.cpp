/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 02:25:29 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 03:58:25 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("undefined") {
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character( std::string name ) : _name(name) {
	//std::cout << "Character parametric constructor called" << std::endl;
}

Character::Character( Character const & src ) {
//	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character( void ) {
	//std::cout << "Character destructor called" << std::endl;
}

Character &			Character::operator=( Character const & src ) {
	this->_name = src.getName();
	return *this;
}
	
std::string			Character::getName( void ) const {
	return this->_name;
}


std::ostream &		operator<<( std::ostream & o, Character const & rhs ) {
	o << "I am " << rhs.getName();
	return o;
}
