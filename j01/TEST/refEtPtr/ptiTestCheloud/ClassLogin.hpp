#ifndef LOGIN_HPP
# define LOGIN_HPP

#include <iostream>

class	Login {

private:
	std::string 	_login;

public:

	Login(std::string login);
	~Login( void );

	Login const		*identify( void ) const;

};

#endif
