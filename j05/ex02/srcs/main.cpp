/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:27:52 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 23:17:59 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat					b("Toto", 147);
	Bureaucrat					b2("Tata", 45);
	Bureaucrat					b3("Tutu", 5);
	ShrubberyCreationForm		scf("Jardin");
	RobotomyRequestForm			rrf("R2D2");
	PresidentialPardonForm		ppf("Jack Sparrow");


	std::cout << std::endl;

	scf.execute(b);
	scf.beSigned(b);
	scf.beSigned(b2);
	scf.execute(b2);

	std::cout << std::endl;

	rrf.beSigned(b2);
	rrf.execute(b2);

	std::cout << std::endl;
	
	ppf.beSigned(b3);
	ppf.execute(b);
	ppf.execute(b3);
	
	std::cout << std::endl;
	
	return 0;
}
