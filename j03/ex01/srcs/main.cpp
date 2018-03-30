/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:27:52 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 11:58:51 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	rob1("ravard");
	ScavTrap	rob2("youhnia");
	

	rob1.challengeNewcomer("youhnia");
	rob2.challengeNewcomer("ravard");
	rob1.challengeNewcomer("youhnia");
	rob2.challengeNewcomer("ravard");
	
	rob1.beRepaired(15);
	rob2.beRepaired(15);
	
	rob1.challengeNewcomer("youhnia");
	rob2.challengeNewcomer("ravard");
	rob1.challengeNewcomer("youhnia");
	rob2.challengeNewcomer("ravard");
	rob1.challengeNewcomer("youhnia");
	rob2.challengeNewcomer("ravard");
	
	rob1.meleeAttack("youhnia");
	rob2.rangedAttack("youhnia");
	
	
	return 0;
}
