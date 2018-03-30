/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:11:31 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 13:43:31 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap() {
	srand(time(NULL));
	std::cout << "NinjaTrap default constructor called" << std::endl;
}

NinjaTrap::NinjaTrap( int *tab, std::string name ) : ClapTrap(tab, name) {
	srand(time(NULL));
	std::cout << "NinjaTrap parametric constructor called" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) {
	srand(time(NULL));
	std::cout << "NinjaTrap copy constructor called" << std::endl;
	*this = src;
}

NinjaTrap::~NinjaTrap( void ) {
	std::cout << "NinjaTrap destructor called" << std::endl;
}

NinjaTrap &			NinjaTrap::operator=( NinjaTrap const & src ) {
	int		tab[8];
	
	src.getValues( tab );
	this->_hp = tab[0];
	this->_hpMax = tab[1];
	this->_ep = tab[2];
	this->_epMax = tab[3];
	this->_lvl = tab[4];
	this->_meleeDmg = tab[5];
	this->_rangedDmg = tab[6];
	this->_armorRatio = tab[7];
	this->_name = src.getName();
	return *this;
}

void			NinjaTrap::ninjaShoebox( FragTrap const & target) {
		std::cout << this->_name << " NinjaTrap a peur de " << target.getName() << " FragTrap" << std::endl;
}

void			NinjaTrap::ninjaShoebox( ScavTrap const & target) {
		std::cout << this->_name << " NinjaTrap lance l'assault sur " << target.getName() << " ScavTrap" << std::endl;
}

void			NinjaTrap::ninjaShoebox( NinjaTrap const & target) {
		std::cout << this->_name << " NinjaTrap se moque de " << target.getName() << " NinjaTrap" << std::endl;
}
