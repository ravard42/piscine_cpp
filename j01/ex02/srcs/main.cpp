/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 22:31:18 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:41:24 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main() {
	Zombie		a("petit cochon des abîmes", "Nafnaf");
	Zombie		b("petit cochon des abîmes", "Nifnif");
	Zombie		c("petit cochon des abîmes", "Noufnouf");
	ZombieEvent	ze("Voodoo Zombie");
	Zombie		*d;
	Zombie		*e;
	Zombie		*f;
	Zombie		*g;
	
	std::cout << std::endl;
	a.announce();
	b.announce();
	c.announce();
	d = ze.newZombie("Zulzin");
	d->announce();
	ze.setZombieType("dark dev");
	e = ze.randomChump();
	f = ze.randomChump();
	g = ze.randomChump();

	std::cout << std::endl;
	
	delete d;
	delete e;
	delete f;
	delete g;
	return 0;
}
