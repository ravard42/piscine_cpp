#include "main.h"

int		main() {
	Zombie		a(Zombie::bankType[0], "Alfred");
	Zombie		b(Zombie::bankType[1], "Bertrand");
	Zombie		c(Zombie::bankType[2], "Robinou");
	Zombie		*d;
	Zombie		*e;
	ZombieEvent	ze("defaultType");
	
	ze.setZombieType(Zombie::bankType[3]);
	d = ze.newZombie("Yassin");
	e = ze.randomChump();
	e->announce();
	e->announce();

	std::cout << std::endl;
	
	delete d;
	delete e;
	return 0;
}
