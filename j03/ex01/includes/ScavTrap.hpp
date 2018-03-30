/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:38:21 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 11:58:43 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP


#include <iostream>

class ScavTrap;
typedef void(ScavTrap::*randChallenge)( std::string const & target);

class ScavTrap {

private:
	static randChallenge const		_bank[];
	int							_hp;
	int							_hpMax;
	int							_ep;
	int							_epMax;
	int							_lvl;
	int							_meleeDmg;
	int							_rangedDmg;
	int							_armorRatio;
	std::string					_name;

	void			challenge1( std::string const & target );
	void			challenge2( std::string const & target );
	void			challenge3( std::string const & target );
	void			challenge4( std::string const & target );
	void			challenge5( std::string const & target );

public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap &		operator=( ScavTrap const & src);

	void			getValues( int *tab) const;
	std::string		getName( void ) const;
	void			meleeAttack( std::string const & target );
	void			rangedAttack( std::string const & target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );
	void			challengeNewcomer(std::string const & target);
};


#endif
