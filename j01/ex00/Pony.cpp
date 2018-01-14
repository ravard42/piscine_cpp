#include "Pony.hpp"


Pony::Pony(std::string col, std::string action) : _color(col),
													_action(action) {
	std::cout << this->_color << "Pony is in the place" << std::endl;
}

Pony::~Pony( void ) {
	std::cout << this->_color << "Pony disappears" << std::endl;
}

void	Pony::doSomeStuff (void) const {
	std::cout << this->_color << "Pony " << this->_action << std::endl;
}

