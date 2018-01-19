#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &w ) : _name(name), _w(w) {
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "HumanA destructor called" << std::endl;
}

void				HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << this->_w.getType() << std::endl;
}
