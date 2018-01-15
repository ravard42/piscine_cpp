#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class	ZombieHorde {

private:
	std::string					_hordeType;
	Zombie						*horde;
	static std::string const	bankName[];
	static int const			bankNameSize;

	void						randomChump(int n);

public:

	ZombieHorde(std::string type, int n);
	~ZombieHorde( void );

};

#endif
