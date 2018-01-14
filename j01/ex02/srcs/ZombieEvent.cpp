#include "ex02.h"

ZombieEvent::ZombieEvent(std::string type) : _eventType(type) {
	std::cout << "ZombieEvent constructor called with _eventType set to: (" << this->_eventType << ")" << std::endl;
	srand(time(NULL));
}

ZombieEvent::~ZombieEvent( void ) {
	std::cout << "ZombieEvent destructor called" << std::endl;
}

std::string	const	ZombieEvent::bankName[] = {"Crowley", "Manson", "ravard", "Morrison", "qhusler"};

void				ZombieEvent::setZombieType(std::string type) {
	this->_eventType = type;
	std::cout << "ZombieEvent instance _eventType set to: (" << this->_eventType << ")>" << std::endl;
}

Zombie				*ZombieEvent::newZombie(std::string name) {
	Zombie		*ret;

	ret = new Zombie(this->_eventType, name);
	return ret;
}

Zombie				*ZombieEvent::randomChump(void) {
	Zombie		*ret;
	int			r;

	r = rand() % 5;
	ret = new Zombie(this->_eventType, ZombieEvent::bankName[r]);
	return ret;
}
