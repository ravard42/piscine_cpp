/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 21:30:47 by ravard            #+#    #+#             */
/*   Updated: 2018/01/09 23:07:51 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

int	main() {
	std::string		buff;
	int				n;
	int				i;
	Contact 		instance[8];
	
	n = 0;
	std::cout << "Bienvenu dans votre liste de contact, que souhaitez vous faire ? --> ADD/SEARCH/EXIT" << std::endl;
	std::getline (std::cin, buff);
	while (buff.compare("EXIT")) {
		if (!buff.compare("ADD")) {
			if (n < 8) {
				instance[n].setField(n);
				n++;
			}
			else
				std::cout << "votre carnet de contact est plein!" << std::endl;
		}
		else if (!buff.compare("SEARCH")) {
			std::cout << "     index|first name| last name|  nickname" << std::endl;
			i = -1;
			while (++i < 8 && instance[i].isSet != -42)
				instance[i].display();
			std::cin >> i;
			if (std::cin.fail() || i < 0 || i > n - 1)
				std::cout << "Loupé! Ce contact n'existe pas!" << std::endl;
			else
				instance[i].displayAll();
			std::cin.clear();
			std::cin.ignore(256,'\n');
		}
		std::cout << "Que souhaitez vous faire ? --> ADD/SEARCH/EXIT" << std::endl;
		std::getline (std::cin, buff);
	}
	return 0;
}
