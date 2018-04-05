/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:27:52 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 19:20:37 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat   bMax("Toto", 0);
	Bureaucrat   bMin("Tutu", 151);


	bMax.increm();
	bMin.decrem();
	
	std::cout << bMax << std::endl;
	std::cout << bMin << std::endl;


	bMax.decrem();
	bMin.increm();
	bMax.decrem();
	bMin.increm();
	bMax.decrem();
	bMin.increm();
	bMax.decrem();
	bMin.increm();
	
	std::cout << bMax << std::endl;
	std::cout << bMin << std::endl;

	return 0;
}
