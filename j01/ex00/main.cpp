/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:32:50 by ravard            #+#    #+#             */
/*   Updated: 2018/03/27 20:37:22 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string color, std::string action) {
	Pony	instance(color, action);
	
	instance.doSomeStuff();
	return;
}

void	 ponyOnTheHeap(std::string color, std::string action) {
	Pony	*instance;

	instance = new Pony(color, action);
	instance->doSomeStuff();
	delete instance;
	return;
}

int		main() {

	ponyOnTheStack("blue", "jump in the air and do a somersault");
	ponyOnTheHeap("red", "looking for some pony friend to meet, he's so alone...");
	return 0;

}
