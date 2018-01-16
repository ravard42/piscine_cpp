#include <iostream>
#include "ClassTest.hpp"


Test::Test(int x) : _x(x) {
	std::cout << "Test constructor called" << std::endl;
}

Test::~Test( void ) {
	std::cout << "Test destructor called" << std::endl;
}

void	Test::f( void ) {
	std::cout << "COUCOU f" << std::endl;
}
