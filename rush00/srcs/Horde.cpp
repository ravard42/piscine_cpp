/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Horde.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadib <oadib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:08:34 by ravard            #+#    #+#             */
/*   Updated: 2018/04/01 17:32:13 by oadib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Horde.hpp"

int 	Horde::_win = 0;
int 	Horde::_nb = 0;

Horde::Horde( void ) {
	this->initTab();
}

Horde::Horde( Horde const & src) {
	*this = src;
}

Horde::~Horde( void ) {
}

Horde &	Horde::operator=( Horde const & src ) {
	int	i = -1;

	this->_win = src.getWin();
	while (++i < NB)
		this->_tab[i] = src.getTab(i);
	return *this;
}

void			Horde::initTab( void ) {
	int		i;

	i = -1;
	while (++i < NB)
		this->_tab[i] = NULL;
}

int				Horde::getWin( void ) const {
	return this->_win;
}

void			Horde::setWin( void ) {
	this->_win = 1;
}

int				Horde::getNb( void ) const {
	return this->_nb;
}

Ennemy		*	Horde::getTab( int i) const {
	return this->_tab[i];
}

void			Horde::addEnnemy( void ) {
	int		i = -1;

	if (this->_nb < NB)
	{
		while (this->_tab[++i] != NULL)
			;
		this->_tab[i] = new Ennemy(rand() % (COLS - 1), 1, 'H', i);
		++this->_nb;
	}
	if (this->_nb < NB)
	{
		while (this->_tab[++i] != NULL)
			;
		this->_tab[i] = new Ennemy(rand() % (COLS - 1), 1, 'X', i);
		++this->_nb;
	}
}

void			Horde::move( Player & p, Missiles & m ) {
	int		i = -1;

	while (++i < NB)	
	{	
		if (this->_tab[i]) {
			this->_tab[i]->move();
			this->_tab[i]->etat(p, *this, m);
		}
	}
}

void			Horde::display( void ) const {
	int		i = -1;

	while (++i < NB)
	{
		if (this->_tab[i])
			this->_tab[i]->display();
	}
}

void			Horde::desaloc( int	i ) {
	delete this->_tab[i];
	this->_tab[i] = NULL;
	this->_nb--;
}

void			Horde::desalocShot( int	i, Player & p ) {
	delete this->_tab[i];
	this->_tab[i] = NULL;
	this->_nb--;
	p.score();
}