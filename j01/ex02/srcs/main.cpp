#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main() {
	Zombie		a(Zombie::bankType[0], "Alfred");
	Zombie		b(Zombie::bankType[1], "Bertrand");
	Zombie		c(Zombie::bankType[2], "Robinou");
	ZombieEvent	ze("defaultType");
	Zombie		*d;
	Zombie		*e;
	Zombie		*f;
	
	std::cout << std::endl;
	
	ze.setZombieType(Zombie::bankType[3]);
	d = ze.newZombie("Yassin");
	ze.setZombieType(Zombie::bankType[1]);
	e = ze.randomChump();
	f = ze.randomChump();
	std::cout << "and another time cause this one is very hungry" << std::endl;
	f->announce();

	std::cout << std::endl;
	
	delete d;
	delete e;
	delete f;
	return 0;
}
