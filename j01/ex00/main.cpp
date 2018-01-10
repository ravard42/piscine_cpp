#include "Pony.hpp"

void	ponyOnTheStack(std::string color, std::string action) {
	Pony	instance (color, action);
	
	instance.doSomeStuff();
	return;
}

void	 ponyOnTheHeap(std::string color, std::string action) {
	Pony	*instance;

	instance = new Pony (color, action);
	instance->doSomeStuff();
	delete instance;
	return;
}

int		main() {

	ponyOnTheStack("blue", "jump in the air and do a somersault");
	ponyOnTheHeap("red", "looking for some pony friend to meet, he's so alone...");
	return 0;

}
