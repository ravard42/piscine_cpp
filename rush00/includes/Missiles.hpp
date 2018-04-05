/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missiles.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadib <oadib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:07:08 by ravard            #+#    #+#             */
/*   Updated: 2018/04/01 16:57:46 by oadib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILES_HPP
# define MISSILES_HPP

#include <iostream>
#include <ncurses.h>
#include "Missile.hpp"
#include "Player.hpp"
#include "Horde.hpp"

#define MNB 10

class Missile;

class Player;

class Horde;

class Missiles {

private:

	static int		_nb;
	Missile		*	_mTab[MNB];


public:

	
	Missiles( void );
	Missiles( int x, int y);
	Missiles( Missiles const & src);
	~Missiles( void );

	Missiles &		operator=( Missiles const & src);

	void		initTab( void );
	int			getNb( void ) const;
	Missile *	getTab( int i ) const;
	void		addMissile( Player & p );
	void		move( Horde & h, Player & p );
	void		display( void ) const;
	void		desaloc( int i );
};


#endif
