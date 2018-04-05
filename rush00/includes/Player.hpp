/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadib <oadib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 12:03:38 by ravard            #+#    #+#             */
/*   Updated: 2018/04/01 14:22:00 by oadib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <iostream>
#include <ncurses.h>
#include "GameEntity.hpp"
#include "Missiles.hpp"
#include "Horde.hpp"

class Horde;

class Missiles;

class Player : public GameEntity {

private:

Missiles		*	_m;
int				_score;

public:

	Player( void );
	Player( int x, int y, char c, Missiles * m);
	Player( Player const & src);
	~Player( void );

	Player &	operator=( Player const & src);
	void		move( int key );
    Missiles *  getTabAddress( void ) const;
	void		etat(Horde & h);
	void		score( void );
	int			getScore( void );

};


#endif
