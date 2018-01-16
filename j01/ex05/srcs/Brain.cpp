#include "ex05.h"

Brain::Brain(std::string taste) : _taste(taste) {
	std::cout << "Brain constructor called, MIAM un cerveau gout " << this->_taste << "!" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain const		*Brain::identify() const {
	return this;
};
