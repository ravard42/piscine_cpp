#include <iostream>
#include "ClassLogin.hpp"

int			main() {
	Login		x("ravard");
	Login		&xRef = x;
	Login		*xPtr;
		
	xPtr = new Login("ravard2");
	
//	std::cout  << "x envoyé sur la sortie standard donne: " << x << std::endl;
//	std::cout  << "Xref sur la sortie standard donne: " << xRef << std::endl;
	std::cout  << "XPtr sur la sortie standard donne: " << xPtr << std::endl;

	std::cout  << "(ravard par x)  ton adresse en memoire est :" << x.identify() << std::endl;
	std::cout  << "(ravard par xRef) ton adresse en memoire est :" << xRef.identify() << std::endl;
	std::cout  << "(ravard 2 par xPtr) ton adresse en memoire est :" << xPtr->identify() << std::endl;
	
	delete xPtr;
	return 0;
}
