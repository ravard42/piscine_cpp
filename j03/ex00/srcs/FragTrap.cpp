/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 08:30:21 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 11:32:12 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : _hp(100), _hpMax(100), _ep(100), _epMax(100),
   							_lvl(1), _meleeDmg(30), _rangedDmg(20),
							_armorRatio(5), _name("void") {
	srand(time(NULL));
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : _hp(100), _hpMax(100), _ep(100), _epMax(100),
   							_lvl(1), _meleeDmg(30), _rangedDmg(20),
							_armorRatio(5), _name(name) {
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

void				FragTrap::getValues( int *tab ) const {
	tab[0] = this->_hp;
	tab[1] = this->_hpMax;
	tab[2] = this->_ep;
	tab[3] = this->_epMax;
	tab[4] = this->_lvl;
	tab[5] = this->_meleeDmg;
	tab[6] = this->_rangedDmg;
	tab[7] = this->_armorRatio;
}

std::string			FragTrap::getName( void ) const {
	return this->_name;
}

void				FragTrap::meleeAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name  << " attacks " << target << " in melee, causing " << this->_meleeDmg << " points of damage !" << std::endl;
}

void				FragTrap::rangedAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name  << " attacks " << target << " at range, causing " << this->_rangedDmg << " points of damage !" << std::endl;
}

void				FragTrap::takeDamage (unsigned int  amount ) {
	this->_hp -= amount * (100 - this->_armorRatio) / 100;
	this->_hp = (this->_hp < 0) ? 0 : this->_hp;
	std::cout << this->_name << " perd " << amount << " hp!" << std::endl;
	if (this->_hp == 0)
		std::cout << this->_name << " est mort..." << std::endl;
}

void				FragTrap::beRepaired( unsigned int amount ) {
	this->_hp += amount;
	this->_hp = (this->_hp > this->_hpMax) ? this->_hpMax : this->_hp;
	std::cout << this->_name << " se heal de " << amount << " hp!" << std::endl;
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
