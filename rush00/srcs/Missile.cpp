/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadib <oadib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:14:28 by ravard            #+#    #+#             */
/*   Updated: 2018/04/01 15:45:24 by oadib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Missile.hpp"

int const		Missile::_speed = 1; 

Missile::Missile( void ) : GameEntity(), _index(0) {
}

Missile::Missile( int x, int y, char c, int i) : GameEntity(x, y, c), _index(i) {
}

Missile::Missile( Missile const & src) : GameEntity(src) {
	*this = src;
}

Missile::~Missile( void ) {
}

Missile &	Missile::operator=( Missile const & src ) {
	this->_x = src.getX();
	this->_y = src.getY();
	this->_c = src.getC();
	this->_index = src.getI();
	return *this;
}

int				Missile::getI( void ) const {
	return this->_index;
}

void			Missile::move( void ) {
	this->_y--;
}

void			Missile::etat( Horde & h, Missiles & m, Player & p) {
    int i = -1;

	if (this->_y < 0)
		m.desaloc(this->_index);
    while (++i < NB) {
        if (h.getTab(i) != NULL && this->_x == h.getTab(i)->getX() && this->_y == h.getTab(i)->getY()) {		
            m.desaloc(this->_index);
            h.desalocShot(i, p);

        }
    }
}
