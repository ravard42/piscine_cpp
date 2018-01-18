#include <iostream>

int		main() {
	std::string		s1;
	std::string		s2;
	std::string		s3;
	std::string		buff;
	size_t			pos;

	s1 = "Salut les ptis loups";
	buff = std::string("loups");
	s1.erase(s1.find("loups"), buff.length());
	std::cout << s1 << std::endl;
	s1 += buff;
	std::cout << s1 << std::endl;
	buff = "ptis";
	pos = s1.find(buff);
	s1.erase(pos, buff.length());
	buff = "grands";
	s1.insert(pos, buff);
	std::cout << s1 << std::endl;

	return 0;
}
