#include <iostream>

void	varIn (int i) {
	i = 53;
}

void	refIn (int &i) {
	i = 53;
}


int		main() {
	int		i = 47;
	int		&Ref = i;

	varIn(i);
	std::cout << i << std::endl;
	refIn(i);
	std::cout << i << std::endl;
	return 0;
}
