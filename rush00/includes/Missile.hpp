#ifndef MISSILE_HPP
# define MISSILE_HPP

#include <iostream>
#include <ncurses.h>
#include "GameEntity.hpp"
#include "Horde.hpp"
#include "Player.hpp"
#include "Missiles.hpp"


class Horde;

class Player;

class Missiles;

class Missile : public GameEntity {

private:
	static int	const		_speed;
	int						_index;

public:

	Missile( void );
	Missile( int x, int y, char c, int i);
	Missile( Missile const & src);
	~Missile( void );

	Missile &	operator=( Missile const & src);
	int				getI( void ) const;
	void			move( void );
	void			etat( Horde & h, Missiles & m, Player & p);
	

};


#endif
