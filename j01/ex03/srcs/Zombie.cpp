#include "ex03.h"

Zombie::Zombie( void ) : _type("default"), _name("default") {
	std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " return into the deep ground...fiou" << std::endl;
}

void				Zombie::setType(std::string type) {
	this->_type = type;
}

void				Zombie::setName(std::string name) {
	this->_name = name;
}

void				Zombie::announce (void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}
