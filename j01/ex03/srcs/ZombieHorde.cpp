#include "ZombieHorde.hpp"

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

std::string	const	ZombieHorde::bankName[] = {"Crowley", "Manson", "ravard", "Morrison", "qhusler", "bobMarley", "Clad", "youhnia"};
int const			ZombieHorde::bankNameSize = 8;


void				ZombieHorde::randomChump(int n) {
	int			i;

	i = -1;
	while (++i < n) {
		this->horde[i].setType(this->_hordeType);
		this->horde[i].setName(ZombieHorde::bankName[rand() % ZombieHorde::bankNameSize]);
		this->horde[i].announce();
	}
}
