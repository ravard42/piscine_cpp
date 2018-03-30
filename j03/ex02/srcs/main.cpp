/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:27:52 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 13:03:02 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	int			fragTab[] = {100, 100, 100, 100, 1, 30, 20, 5};
	int			scavTab[] = {100, 100, 50, 50, 1, 20, 15, 3};

	FragTrap	rob1(fragTab, "ravard");
	ScavTrap	rob2(scavTab, "youhnia");
	

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
	
	
	return 0;
}
