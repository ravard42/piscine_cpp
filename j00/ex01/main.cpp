/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 21:30:47 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 04:29:34 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

int	main() {
	std::string		buff;
	int				n;
	int				i;
	Contact 		instance[8];
	
	std::cout << "Bienvenu dans votre liste de contacts, que souhaitez vous faire ? --> ADD/SEARCH/EXIT" << std::endl;
	std::getline(std::cin, buff);
	n = -1;
	while (buff.compare("EXIT")) {
		if (!buff.compare("ADD")) {
			if (++n < 8) 
				instance[n].setField(n);
			else
				std::cout << "votre carnet de contact est plein!" << std::endl;
		}
		else if (!buff.compare("SEARCH")) {
			std::cout << "     index|first name| last name|  nickname" << std::endl;
			i = -1;
			while (++i < 8 && instance[i].isSet != -1)
				instance[i].display();
			std::cin >> i;
			if (std::cin.fail() || i < 0 || i > n)
				std::cout << "Loupé! Ce contact n'existe pas!" << std::endl;
			else
				if (i <= 7)
					instance[i].displayAll();
			std::cin.clear();
			std::cin.ignore(256,'\n');
		}
		std::cout << "Que souhaitez vous faire ? --> ADD/SEARCH/EXIT" << std::endl;
		std::getline(std::cin, buff);
	}
	return 0;
}
