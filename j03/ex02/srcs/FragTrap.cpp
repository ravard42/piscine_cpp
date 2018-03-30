/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 08:30:21 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 12:54:15 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	srand(time(NULL));
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( int *tab, std::string name ) : ClapTrap(tab, name) {
	srand(time(NULL));
	std::cout << "FragTrap parametric constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) {
	srand(time(NULL));
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &			FragTrap::operator=( FragTrap const & src ) {
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

randAttack const	FragTrap::_bank[] = {&FragTrap::attack1, &FragTrap::attack2, &FragTrap::attack3, &FragTrap::attack4, &FragTrap::attack5};

void				FragTrap::attack1( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name  << " lance coup d'pompe dans l'oignon sur " << target << std::endl;
}

void				FragTrap::attack2( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name  << " lance superNova sur " << target << std::endl;
}

void				FragTrap::attack3( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name  << " lance jet de bière (8.6) sur " << target << std::endl;
}

void				FragTrap::attack4( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name  << " lance brasier sur " << target << std::endl;
}

void				FragTrap::attack5( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name  << " lance bad trip sur " << target << std::endl;
}

void				FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_ep >= 25) {
		(this->*_bank[rand() % 5])( target );
		this->_ep -= 25;
		this->_ep = (this->_epMax < 0) ? 0 : this->_ep;
	}
	else
		std::cout << "out of energy!" << std::endl;
}
