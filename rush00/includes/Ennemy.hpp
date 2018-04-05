/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ennemy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadib <oadib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:15:25 by ravard            #+#    #+#             */
/*   Updated: 2018/04/01 13:39:19 by oadib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENNEMY_HPP
# define ENNEMY_HPP

#include <iostream>
#include <ncurses.h>
#include "GameEntity.hpp"
#include "Horde.hpp"
#include "Player.hpp"
#include "Missiles.hpp"

class Horde;

class Player;

class Missiles;

class Ennemy : public GameEntity {

private:
	static int	const		_speed;
	int						_index;

public:

	Ennemy( void );
	Ennemy( int x, int y, char c, int i);
	Ennemy( Ennemy const & src);
	~Ennemy( void );

	Ennemy &	operator=( Ennemy const & src);
	int				getI( void ) const;
	void			move( void );
	void			etat( Player & p, Horde & h, Missiles & m );
	

};


#endif
