/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassGameEntity.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@2.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 02:47:22 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 17:45:41 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameEntity.hpp"

GameEntity::GameEntity( void ) : _x(0), _y(0), _c(0) {
}

GameEntity::GameEntity( int x, int y, char c) : _x(x), _y(y), _c(c) {
}

GameEntity::GameEntity( GameEntity const & src) {
	*this = src;
}

GameEntity::~GameEntity( void ) {
}

GameEntity &	GameEntity::operator=( GameEntity const & src ) {
	this->_x = src.getX();
	this->_y = src.getY();
	this->_c = src.getC();
	return *this;
}

void			GameEntity::setCoord(int x, int y) {
	this->_x = x;
	this->_y = y;
}

int				GameEntity::getX( void ) const {
	return this->_x;
}

int				GameEntity::getY( void ) const {
	return this->_y;
}

char			GameEntity::getC( void ) const {
	return this->_c;
}

void			GameEntity::display( void ) const {

	move(this->_y, this->_x);
	addch(this->_c);
};
