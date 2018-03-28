/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 01:37:25 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 02:37:20 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

typedef						void (Human::*ptrM)(std::string const &target);

struct						s_attack {
	std::string	const		action_name;
	ptrM					attack;
};

int			Human::_n = 3;

s_attack	Human::_attack[] = {
	{"meleeAttack", &Human::_meleeAttack},
	{"rangedAttack", &Human::_rangedAttack},
	{"intimidatingShout", &Human::_intimidatingShout}
};

Human::Human( void ) {
	std::cout << "Human constructor called" << std::endl;
}

Human::~Human( void ) {
	std::cout << "Human destructor called" << std::endl;
}


void	Human::_meleeAttack(std::string const & target) {
	std::cout << "meleeAttack on " << target << std::endl;
}

void 	Human::_rangedAttack(std::string const & target) {
	std::cout << "rangedAttack on " << target << std::endl;
}

void 	Human::_intimidatingShout(std::string const & target) {
	std::cout << "intimidatingShout on " << target << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target) {
	int		i = -1;

	while (++i < Human::_n)
	{
		if (!action_name.compare(_attack[i].action_name))
		{
			(this->*_attack[i].attack)(target);
			return ;
		}
	}
	std::cout << "cette action n'existe pas!" << std::endl;
}
