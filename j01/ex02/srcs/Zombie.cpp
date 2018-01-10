#include "main.h"

Zombie::Zombie(std::string type, std::string name) : _type(type),
														_name(name) {
	this->announce();
}

Zombie::~Zombie( void ) {
	std::cout << "<" << this->_name << " " << this->_type << ">" << " return in the deep ground...fiou" << std::endl;
}

std::string	const	Zombie::bankType[] = {"Walker", "Runner", "Voodoo Zombie", "Crawler"};

void				Zombie::announce (void) const {
	std::cout << "<" << this->_name << " " << this->_type << ">" << " Braiiiiiiinnnssss..." << std::endl;
}
