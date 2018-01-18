#include <fstream>
#include <iostream>

int		main() {
	std::ifstream	ifs("toRead.txt");
	//std::ofstream	ofs("toWrite.txt"); // efface le contenu du fichier!!!
	std::ofstream	ofs("toWrite.txt", std::ofstream::app); //ecri a la suite du fichier 
	std::string		recup[4];
	int				i;


	
	i = -1;
	while (++i < 4) {
		ifs >> recup[i];
		std::cout << recup[i] << std::endl;
	}
	ifs.close();
	

	ifs.open("toRead.txt");
	std::getline(ifs, *recup);
	std::cout << *recup << std::endl;
	ifs.close();

	ofs << "whesh la forme ? " << std::endl;
	ofs.close();
	
	ifs.open("toWrite.txt");
	std::getline(ifs, *recup);
	std::cout << recup[0] << std::endl;
	ifs.close();
	
	

	return 0;
}
