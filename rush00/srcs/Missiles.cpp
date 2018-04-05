/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missiles.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:08:34 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 17:47:45 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Missiles.hpp"

int 	Missiles::_nb = 0;

Missiles::Missiles( void ) {
	this->initTab();
}

Missiles::Missiles( Missiles const & src) {
	*this = src;
}

Missiles::~Missiles( void ) {
}

Missiles &	Missiles::operator=( Missiles const & src ) {
	int	i = -1;

	while (++i < MNB)
		this->_mTab[i] = src.getTab(i);
	return *this;
}

void			Missiles::initTab( void ) {
	int		i;

	i = -1;
	while (++i < MNB)
		this->_mTab[i] = NULL;
}

int				Missiles::getNb( void ) const {
	return this->_nb;
}

Missile		*	Missiles::getTab( int i) const {
	return this->_mTab[i];
}

void			Missiles::addMissile( Player & p ) {
	int		i = -1;

	if (p.getY() > 0 && this->_nb < MNB)
	{
		while (this->_mTab[++i] != NULL)
			;
		this->_mTab[i] = new Missile(p.getX(), p.getY() - 1, '.', i);
		++this->_nb;
	}
}

void			Missiles::move( Horde & h, Player & p ) {
	int		i = -1;

	while (++i < MNB)	
	{	
		if (this->_mTab[i]) {
			this->_mTab[i]->move();
			this->_mTab[i]->etat(h, *this, p);
		}
	}
}

void			Missiles::display( void ) const {
	int		i = -1;

	while (++i < MNB)
	{
		if (this->_mTab[i])
			this->_mTab[i]->display();
	}
}

void			Missiles::desaloc( int	i ) {
	delete this->_mTab[i];
	this->_mTab[i] = NULL;
	this->_nb--;
}
