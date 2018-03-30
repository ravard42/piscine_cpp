/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 12:17:55 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 13:03:20 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hp(0), _hpMax(0), _ep(0), _epMax(0),
						_lvl(1), _meleeDmg(0), _rangedDmg(0),
						_armorRatio(0), _name("void") {
	srand(time(NULL));
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( int *tab, std::string name ) : _hp(tab[0]), _hpMax(tab[1]), _ep(tab[2]),
						_epMax(tab[3]), _lvl(tab[4]), _meleeDmg(tab[5]), _rangedDmg(tab[6]),
						_armorRatio(tab[7]), _name(name) {
	srand(time(NULL));
	std::cout << "ClapTrap parametric constructor called : " << this->_name << " is in the place!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
	srand(time(NULL));
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &			ClapTrap::operator=( ClapTrap const & src ) {
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

void				ClapTrap::getValues( int *tab ) const {
	tab[0] = this->_hp;
	tab[1] = this->_hpMax;
	tab[2] = this->_ep;
	tab[3] = this->_epMax;
	tab[4] = this->_lvl;
	tab[5] = this->_meleeDmg;
	tab[6] = this->_rangedDmg;
	tab[7] = this->_armorRatio;
}

std::string			ClapTrap::getName( void ) const {
	return this->_name;
}

void				ClapTrap::meleeAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name  << " attacks " << target << " in melee, causing " << this->_meleeDmg << " points of damage !" << std::endl;
}

void				ClapTrap::rangedAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name  << " attacks " << target << " at range, causing " << this->_rangedDmg << " points of damage !" << std::endl;
}

void				ClapTrap::takeDamage (unsigned int  amount ) {
	this->_hp -= amount * (100 - this->_armorRatio) / 100;
	this->_hp = (this->_hp < 0) ? 0 : this->_hp;
	std::cout << this->_name << " perd " << amount << " hp!" << std::endl;
	if (this->_hp == 0)
		std::cout << this->_name << " est mort..." << std::endl;
}

void				ClapTrap::beRepaired( unsigned int amount ) {
	this->_hp += amount;
	this->_hp = (this->_hp > this->_hpMax) ? this->_hpMax : this->_hp;
	std::cout << this->_name << " se heal de " << amount << " hp!" << std::endl;
}
