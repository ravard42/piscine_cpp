#include "ClassLogin.hpp"

Login::Login(std::string login) : _login(login) {
	std::cout << "Login constructor called, salut " << this->_login << "!" << std::endl;
}

Login::~Login( void ) {
	std::cout << "Login destructor called" << std::endl;
}

Login const		*Login::identify( void ) const {
	return this;
}
