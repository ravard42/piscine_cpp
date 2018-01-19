#include "Human.hpp"

Human::Human( void ) {
	std::cout << "Human constructor called" << std::endl;
}

Human::~Human( void ) {
	std::cout << "Human destructor called" << std::endl;
}

Brain const 		*Human::identify() const{
	return this->_brain.identify();
};

Brain const			&Human::getBrain ( void ) const{
	return this->_brain;
}

