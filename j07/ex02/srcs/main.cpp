/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 04:25:49 by ravard            #+#    #+#             */
/*   Updated: 2018/04/05 09:54:30 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"


int		main( void ) {
	
	// 1]
	std::cout << "Array<float> nullTab = Array< float >() ====>" << std::endl;
	Array< float >		nullTab = Array< float >();
	std::cout << "nullTab.size() = " << nullTab.size() << std::endl;
	std::cout << "appel de nullTab[0] -> " << nullTab[0] << std::endl << std::endl;


	// 2]
	
	std::cout << "Array<std::string> strTab = Array< std::string >(5) + remplissage, depassement et affichage ====>" << std::endl;
	Array<std::string>	strTab = Array< std::string >(5);

	strTab[0] = "COUCOU";
	strTab[1] = "LES";
	strTab[2] = "AMIS";
	strTab[3] = "ÇA";
	strTab[4] = "BICHE?";
	strTab[5] = "DEPASSEMENT";
	std::cout << strTab << std::endl;


	// 3]
	std::cout << "Array< int > tab = Array< int >(5) + constructeur par copy de tab2 sur tab + tab2 = tab ====>" << std::endl;
	Array< int >		tab = Array< int >(5);
	int					i;
	
	i = -1;
	while(++i < 5)
		tab[i] = i;

	Array< int > tab2 = Array< int >(tab);
	std::cout << tab << std::endl;
	std::cout << tab2 << std::endl;
	
	tab[0] = 42;
	tab2[4] = 42;
	std::cout << "tab =>" << std::endl;
	std::cout << tab << std::endl;
	std::cout << "tab2 => " << std::endl;
	std::cout << tab2 << std::endl;
	tab2 = tab;
	std::cout << "tab2 = tab" << std::endl;
	std::cout << "tab =>" << std::endl;
	std::cout << tab << std::endl;
	std::cout << "tab2 =>" << std::endl;
	std::cout << tab2 << std::endl;

	// 4]
	std::cout << "nouveau test de depassement sur un Array< int > ====>" << std::endl;
	tab[600000] = 45;
	return 0;
}
