/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:27:52 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 11:30:48 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	rob1("ravard");
	FragTrap	rob2("youhnia");
	

	rob1.vaulthunter_dot_exe("youhnia");
	rob2.vaulthunter_dot_exe("ravard");
	rob1.vaulthunter_dot_exe("youhnia");
	rob2.vaulthunter_dot_exe("ravard");
	
	rob1.beRepaired(15);
	rob2.beRepaired(15);
	
	rob1.vaulthunter_dot_exe("youhnia");
	rob2.vaulthunter_dot_exe("ravard");
	rob1.vaulthunter_dot_exe("youhnia");
	rob2.vaulthunter_dot_exe("ravard");
	rob1.vaulthunter_dot_exe("youhnia");
	rob2.vaulthunter_dot_exe("ravard");
	
	rob1.meleeAttack("youhnia");
	rob2.rangedAttack("youhnia");
	
	
	return 0;
}
