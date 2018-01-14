#include <iostream>


void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int		 main() {
	int			buff = 0;
	
	memoryLeak();
	while (buff != 1)
		std::cin >> buff;
	return 0;
}
