#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class	Pony {

private:
	std::string		_color;
	std::string		_action;


public:

	Pony(std::string col, std::string action);
	~Pony();

	void	doSomeStuff( void ) const;

};


#endif
