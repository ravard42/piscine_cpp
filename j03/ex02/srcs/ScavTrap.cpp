/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:39:53 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 13:03:41 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	srand(time(NULL));
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( int * tab, std::string name ) : ClapTrap(tab, name) {
	srand(time(NULL));
	std::cout << "ScavTrap parametric constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	srand(time(NULL));
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &			ScavTrap::operator=( ScavTrap const & src ) {
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

randChallenge const	ScavTrap::_bank[] = {&ScavTrap::challenge1, &ScavTrap::challenge2, &ScavTrap::challenge3, &ScavTrap::challenge4, &ScavTrap::challenge5};

void				ScavTrap::challenge1( std::string const & target ) {
	std::cout << "SC4V-TP " << this->_name  << " met au défi " << target << " de boir une t'eille de sky Q sec" << std::endl;
}

void				ScavTrap::challenge2( std::string const & target ) {
	std::cout << "SC4V-TP " << this->_name  << " met au défi " << target << " de respirer la compote sans tousser!" << std::endl;
}

void				ScavTrap::challenge3( std::string const & target ) {
	std::cout << "SC4V-TP " << this->_name  << " met au défi " << target << " de seduire la postière a lunettes." << std::endl;
}

void				ScavTrap::challenge4( std::string const & target ) {
	std::cout << "SC4V-TP " << this->_name  << " met au défi " << target << " de manger un serpent avec de la sauce algérienne." << std::endl;
}

void				ScavTrap::challenge5( std::string const & target ) {
	std::cout << "SC4V-TP " << this->_name  << " met au défi " << target << " de combattre un lion avec une brindille." << std::endl;
}

void				ScavTrap::challengeNewcomer(std::string const & target) {
	if (this->_ep >= 10) {
		(this->*_bank[rand() % 5])( target );
		this->_ep -= 10;
		this->_ep = (this->_epMax < 0) ? 0 : this->_ep;
	}
	else
		std::cout << "out of energy!" << std::endl;
}
