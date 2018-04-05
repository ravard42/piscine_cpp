/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassGameEntity.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 02:47:07 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 13:53:06 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEENTITY_HPP
# define GAMEENTITY_HPP

#include <iostream>
#include <ncurses.h>

class GameEntity {

protected:
	int		_x;
	int		_y;
	char	_c;

public:

	GameEntity( void );
	GameEntity( int x, int y, char c);
	GameEntity( GameEntity const & src);
	~GameEntity( void );

	GameEntity &	operator=( GameEntity const & src);

	int				getX( void ) const;
	int				getY( void ) const;
	char			getC( void ) const;
	void			setCoord(int x, int y);
	void			display( void ) const;
};


#endif
