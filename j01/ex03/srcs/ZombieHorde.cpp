/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 22:33:59 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:48:39 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string	const	ZombieHorde::bankName[] = {"youhnia", "gchmargo", "ravard", "dolewski", "qhusler", "mberges", "rbaum", "jfaucher", "vdaviot", "ymonfray", "bcorso", "avannest", "tbillard", "ldevalau", "ldegardi", "lcambeil", "lcariou", "sroger", "rmdaba", "rclanget"};

int const			ZombieHorde::bankNameSize = 20;

void				ZombieHorde::randomChump(int n) const {
	int			i;

	i = -1;
	while (++i < n) {
		this->horde[i].setType(this->_hordeType);
		this->horde[i].setName(ZombieHorde::bankName[rand() % ZombieHorde::bankNameSize]);
		this->horde[i].announce();
	}
}

ZombieHorde::ZombieHorde(std::string type, int n) : _hordeType(type) {
	std::cout << "ZombieHorde constructor called, "  << n << " (" << this->_hordeType << ") are about to raise from the ground!!!" << std::endl;
	this->horde = new Zombie[n];
	srand(time(NULL));
	this->randomChump(n);
}

ZombieHorde::~ZombieHorde( void ) {
	std::cout << "ZombieHorde destructor called" << std::endl;
	delete [] horde;
}
