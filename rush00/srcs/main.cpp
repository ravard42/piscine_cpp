/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadib <oadib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 03:22:48 by ravard            #+#    #+#             */
/*   Updated: 2018/04/01 17:37:48 by oadib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameEntity.hpp"
#include "Player.hpp"
#include "Ennemy.hpp"
#include "Horde.hpp"

#include <unistd.h>
#include <iostream>

void	 game(void)
{
	Missiles			m;
	Player				p((COLS - 1) / 2, LINES - 1, 'A', &m);
	char 				key = 1;
	Horde				h;
	int					frameBasedTiming = 0;

	srand(time(NULL));
	int seconds = 0;
	int min = 0;
	int D = 300;

	move(p.getY(), p.getX());
	addch('.');
	refresh();

	nodelay(stdscr, TRUE);
	curs_set(0);
	while(key != 'x' && !h.getWin()) {
		if ((key = getch()) != ERR)
		{
			p.move(key);
			p.etat(h);
		}
		if (frameBasedTiming % 200 == 0)
		{
			h.move(p, m);
			h.addEnnemy();
			p.getTabAddress()->move(h, p);
		}
		if ((seconds/1000) == 60){
			min++;
			seconds = 0;
			p.score();
			if (D > 120)
				D = D - 20;
		}
		clear();
		printw( "Score: %i | Time %iM %iS \n", p.getScore(), min, seconds/1000 );
		p.display();
		p.getTabAddress()->display();
		h.display();
		refresh();
		usleep(D);
		frameBasedTiming++;
		seconds++;
	}
}

int main(void)
{
	initscr();
	game();
	endwin();
	std::cout << "		GAME OVER		" << std::endl;
	return 0;
}
