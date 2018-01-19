#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : _type(type),
														_name(name) {
	std::cout << "Zombie constructor called" << std::endl;
	this->announce();
}

Zombie::~Zombie( void ) {
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " return into the deep ground...fiou" << std::endl;
}

std::string	const	Zombie::bankType[] = {"Walker", "Runner", "Voodoo Zombie", "Corrupted Guitarist"};

void				Zombie::announce (void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}
