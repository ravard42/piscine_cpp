/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPlayer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 03:39:26 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 19:31:52 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player( void ) : GameEntity(), _m(NULL) {
}

Player::Player( int x, int y, char c, Missiles * m ) : GameEntity(x, y, c), _m(m) {
	this->_score = 0;
}

Player::Player( Player const & src) : GameEntity(src) {
	*this = src;
}

Player::~Player( void ) {
}

Player &	Player::operator=( Player const & src ) {
	this->_x = src.getX();
	this->_y = src.getY();
	this->_c = src.getC();
	this->_m = src.getTabAddress();
	this->_score = src._score;

	return *this;
}

Missiles    *   Player::getTabAddress( void ) const{
    return this->_m;
}

void			Player::move( int key ) {
	if (key == 'w')
		this->_y--;
	else if (key == 's')
		this->_y++;
	else if (key == 'd')
		this->_x++;
	else if (key == 'a')
		this->_x--;
	else if (key == ' '){
		this->_m->addMissile(*this);
	}
	this->_x = this->_x < 0 ? 0 : this->_x;
	this->_x = this->_x >= COLS ? COLS - 1 : this->_x;
	this->_y = this->_y < 0 ? 0 : this->_y;
	this->_y = this->_y >= LINES ? LINES - 1 : this->_y;
}

void			Player::etat( Horde & h ) {
	int		i = -1;

	while (++i < NB)	
	{	
		if (h.getTab(i)  && h.getTab(i)->getX() == this->_x && h.getTab(i)->getY() == this->_y) {
			h.setWin();
		}
	}
	
}

void			Player::score( void ){
	this->_score = this->_score + 10;
}

int				Player::getScore( void ){
	return this->_score;
}