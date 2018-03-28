/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:53:23 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:44:20 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string	const	ZombieEvent::bankName[] = {"youhnia", "gchmargo", "ravard", "dolewski", "qhusler", "mberges", "rbaum", "jfaucher", "vdaviot", "ymonfray", "bcorso", "avannest", "tbillard"};
int const			ZombieEvent::bankNameSize = 13;

ZombieEvent::ZombieEvent( std::string type ) : _eventType(type) {
	srand(time(NULL));
	std::cout << "ZombieEvent constructor called with _eventType set to: (" << this->_eventType << ")" << std::endl;
}

ZombieEvent::~ZombieEvent( void ) {
	std::cout << "ZombieEvent destructor called" << std::endl;
}


void				ZombieEvent::setZombieType(std::string type) {
	this->_eventType = type;
	std::cout << "ZombieEvent instance _eventType set to: (" << this->_eventType << ")" << std::endl;
}

Zombie				*ZombieEvent::newZombie(std::string name) const {
	Zombie		*ret;

	ret = new Zombie(this->_eventType, name);
	return ret;
}

Zombie				*ZombieEvent::randomChump(void) const {
	Zombie		*ret;
	int			r;

	r = rand() % ZombieEvent::bankNameSize;
	ret = new Zombie(this->_eventType, ZombieEvent::bankName[r]);
	ret->announce();
	return ret;
}
