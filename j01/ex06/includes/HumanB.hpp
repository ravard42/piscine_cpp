/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 01:09:43 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 01:15:07 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

private:
	std::string			_name;
	Weapon				*_w;

public:

	HumanB( std::string name );
	~HumanB( void );

	void			setWeapon(Weapon &w);
	void  			attack( void ) const;

};

#endif
