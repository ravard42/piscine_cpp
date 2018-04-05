/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Horde.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadib <oadib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:07:08 by ravard            #+#    #+#             */
/*   Updated: 2018/04/01 16:57:32 by oadib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HORDE_HPP
# define HORDE_HPP

#include <iostream>
#include <ncurses.h>
#include "Ennemy.hpp"
#include "Player.hpp"

#define NB 99

class Ennemy;

class Horde {

private:

	static int		_win;
	static int		_nb;
	Ennemy		*	_tab[NB];


public:

	
	Horde( void );
	Horde( int x, int y);
	Horde( Horde const & src);
	~Horde( void );

	Horde &		operator=( Horde const & src);

	void		initTab( void );
	int			getWin( void ) const;
	void		setWin( void );
	int			getNb( void ) const;
	Ennemy *	getTab( int i ) const;
	void		addEnnemy( void );
	void		move( Player & p, Missiles & m );
	void		display( void ) const;
	void		desaloc( int i );
	void		desalocShot( int i, Player & p );	
};


#endif
