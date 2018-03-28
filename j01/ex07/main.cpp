/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 01:16:57 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 01:24:18 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		buff[3];
	size_t			i;

	if (argc != 4) {
		std::cout << "pas le bon nombre d'arguments" << std::endl;
		exit(EXIT_FAILURE);
	}
	buff[1] = (std::string)argv[2];
	buff[2] = (std::string)argv[3];
	if (!buff[1].length() || !buff[2].length()) {
		std::cout << "arguments invalides" << std::endl;
		exit(EXIT_FAILURE);
	}

	buff[0] = (std::string)argv[1];
	i = -1;
	while (++i < buff[0].length())
		buff[0][i] = toupper(buff[0][i]);
	buff[0] += ".replace";
	
	ofs.open(buff[0]);
	ifs.open(argv[1]);
	while (std::getline(ifs, buff[0])) {
		while ((i = buff[0].find(buff[1])) != std::string::npos) {
			buff[0].erase(i, buff[1].length());
			buff[0].insert(i, buff[2]);
		}
		ofs << buff[0] << std::endl;
	}

	ofs.close();
	ifs.close();
	return 0;
}
