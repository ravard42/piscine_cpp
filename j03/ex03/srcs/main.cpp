/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:27:52 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 13:49:49 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	int			fragTab[] = {100, 100, 100, 100, 1, 30, 20, 5};
	int			scavTab[] = {100, 100, 50, 50, 1, 20, 15, 3};
	int			ninjaTab[] = {60, 60, 120, 120, 1, 60, 5, 0};

	FragTrap	rob1(fragTab, "ravard");
	ScavTrap	rob2(scavTab, "youhnia");
	NinjaTrap	rob3(ninjaTab, "qhusler");
	NinjaTrap	rob4(ninjaTab, "gchmargo");
	

	rob1.vaulthunter_dot_exe("youhnia");
	rob2.challengeNewcomer("ravard");
	rob1.vaulthunter_dot_exe("youhnia");
	rob2.challengeNewcomer("ravard");
	
	rob1.beRepaired(15);
	rob2.beRepaired(15);
	
	rob1.vaulthunter_dot_exe("youhnia");
	rob2.challengeNewcomer("ravard");
	rob1.vaulthunter_dot_exe("youhnia");
	rob2.challengeNewcomer("ravard");
	rob1.vaulthunter_dot_exe("youhnia");
	rob2.challengeNewcomer("ravard");
	
	rob1.meleeAttack("youhnia");
	rob2.rangedAttack("ravard");
	
	rob3.ninjaShoebox(rob1);
	rob3.ninjaShoebox(rob2);
	rob3.ninjaShoebox(rob4);

	rob4.meleeAttack("youhnia");
	rob4.rangedAttack("ravard");
	
	
	return 0;
}
