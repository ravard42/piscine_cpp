#include <iostream>

int		varInOut (int i) {
	std::cout << &i << std::endl;
	return i;
}

int		&refInOut (int &iRef) {
	std::cout << &iRef << std::endl;
	return i;
}


int		main() {
	int		i = 42;

	std::cout << &i << std::endl;
	int y = varInOut(i);
	std::cout << &y << std::endl;

	int		&iRef = i;

	std::cout << &iRef << std::endl;
	int &yRef = refInOut(iRef);
	std::cout << &yRef << std::endl;

	return 0;
}
