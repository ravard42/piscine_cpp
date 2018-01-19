#include "Human.hpp"

typedef						void (Human::*ptrM)(std::string const &target);

struct						s_attack {
	std::string	const		action_name;
	ptrM					attack;
};

int			Human::_n = 3;

s_attack	Human::_attack[] = {
	{"meleeAttack", &Human::meleeAttack},
	{"rangedAttack", &Human::rangedAttack},
	{"intimidatingShout", &Human::intimidatingShout}
};

Human::Human( void ) {
	std::cout << "Human constructor called" << std::endl;
}

Human::~Human( void ) {
	std::cout << "Human destructor called" << std::endl;
}


void	Human::meleeAttack(std::string const & target) {
	std::cout << "meleeAttack on " << target << std::endl;
}

void 	Human::rangedAttack(std::string const & target) {
	std::cout << "rangedAttack on " << target << std::endl;
}

void 	Human::intimidatingShout(std::string const & target) {
	std::cout << "intimidatingShout on " << target << std::endl;
}


void	Human::action(std::string const &action_name, std::string const &target) {
	int		i = -1;

	while (++i < Human::_n)
		if (!action_name.compare(_attack[i].action_name))
			(this->*_attack[i].attack)(target);
}
