/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 12:18:03 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 12:41:02 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

protected:
	int							_hp;
	int							_hpMax;
	int							_ep;
	int							_epMax;
	int							_lvl;
	int							_meleeDmg;
	int							_rangedDmg;
	int							_armorRatio;
	std::string					_name;

public:

	ClapTrap( void );
	ClapTrap( int *tab, std::string name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	ClapTrap &		operator=( ClapTrap const & src);

	void			getValues( int *tab) const;
	std::string		getName( void ) const;
	void			meleeAttack( std::string const & target );
	void			rangedAttack( std::string const & target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );
};


#endif
