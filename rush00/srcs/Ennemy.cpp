/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ennemy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadib <oadib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:14:28 by ravard            #+#    #+#             */
/*   Updated: 2018/04/01 14:32:51 by oadib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ennemy.hpp"

int const		Ennemy::_speed = 1; 

Ennemy::Ennemy( void ) : GameEntity(), _index(0) {
}

Ennemy::Ennemy( int x, int y, char c, int i) : GameEntity(x, y, c), _index(i) {
}

Ennemy::Ennemy( Ennemy const & src) : GameEntity(src) {
	*this = src;
}

Ennemy::~Ennemy( void ) {
}

Ennemy &	Ennemy::operator=( Ennemy const & src ) {
	this->_x = src.getX();
	this->_y = src.getY();
	this->_c = src.getC();
	this->_index = src.getI();
	return *this;
}

int				Ennemy::getI( void ) const {
	return this->_index;
}

void			Ennemy::move( void ) {
	this->_y++;
}

void			Ennemy::etat( Player & p, Horde & h, Missiles & m) {
	int i = -1;
	if (this->_y >= LINES)
		h.desaloc(this->_index);
	else if (this->_x == p.getX() && this->_y == p.getY())
		h.setWin();
	while (++i < MNB) {
        if (m.getTab(i) != NULL && this->_x == m.getTab(i)->getX() && this->_y == m.getTab(i)->getY()) {		
            m.desaloc(i);
            h.desalocShot(this->_index, p);
        }
    }
}
