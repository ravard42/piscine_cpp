#include "ex05.h"

int main() {
	Human bob("Chocolat");
	
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	return 0;
}
