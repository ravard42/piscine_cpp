#include "ex05.h"

Human::Human(std::string brainTaste) : _brain(brainTaste) {
	std::cout << "Human constructor called" << std::endl;
}

Human::~Human( void ) {
	std::cout << "Human destructor called" << std::endl;
}

Brain const		&Human::getBrain ( void ) const {
	return this->_brain;
}

Brain const		*Human::identify() const {
	return this->_brain.identify();
};
