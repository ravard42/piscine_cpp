#include "Human.hpp"

int main() {
	Human bob;
	
	bob.action("meleeAttack", "peter");
	bob.action("rangedAttack", "léopol");
	bob.action("intimidatingShout", "doubishou");
	bob.action("error", "doubishou");

	return 0;
}
