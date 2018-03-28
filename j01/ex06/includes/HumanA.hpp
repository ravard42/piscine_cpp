/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 01:02:47 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 01:15:06 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA {

private:
	std::string			_name;
	Weapon				&_w;

public:

	HumanA( std::string name, Weapon &w );
	~HumanA( void );

	void  			attack( void ) const;

};

#endif
