/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:39:53 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 11:58:42 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : _hp(100), _hpMax(100), _ep(50), _epMax(50),
   							_lvl(1), _meleeDmg(20), _rangedDmg(15),
							_armorRatio(3), _name("void") {
	srand(time(NULL));
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : _hp(100), _hpMax(100), _ep(50), _epMax(50),
   							_lvl(1), _meleeDmg(20), _rangedDmg(15),
							_armorRatio(3), _name(name) {
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

void				ScavTrap::getValues( int *tab ) const {
	tab[0] = this->_hp;
	tab[1] = this->_hpMax;
	tab[2] = this->_ep;
	tab[3] = this->_epMax;
	tab[4] = this->_lvl;
	tab[5] = this->_meleeDmg;
	tab[6] = this->_rangedDmg;
	tab[7] = this->_armorRatio;
}

std::string			ScavTrap::getName( void ) const {
	return this->_name;
}

void				ScavTrap::meleeAttack( std::string const & target ) {
	std::cout << "SC4V-TP " << this->_name  << " challenges " << target << " in melee, causing " << this->_meleeDmg << " points of damage !" << std::endl;
}

void				ScavTrap::rangedAttack( std::string const & target ) {
	std::cout << "SC4V-TP " << this->_name  << " challenges " << target << " at range, causing " << this->_rangedDmg << " points of damage !" << std::endl;
}

void				ScavTrap::takeDamage (unsigned int  amount ) {
	this->_hp -= amount * (100 - this->_armorRatio) / 100;
	this->_hp = (this->_hp < 0) ? 0 : this->_hp;
	std::cout << this->_name << " perd " << amount << " hp!" << std::endl;
	if (this->_hp == 0)
		std::cout << this->_name << " est mort..." << std::endl;
}

void				ScavTrap::beRepaired( unsigned int amount ) {
	this->_hp += amount;
	this->_hp = (this->_hp > this->_hpMax) ? this->_hpMax : this->_hp;
	std::cout << this->_name << " se heal de " << amount << " hp!" << std::endl;
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
	if (this->_ep >= 25) {
		(this->*_bank[rand() % 5])( target );
		this->_ep -= 25;
		this->_ep = (this->_epMax < 0) ? 0 : this->_ep;
	}
	else
		std::cout << "out of energy!" << std::endl;
}
