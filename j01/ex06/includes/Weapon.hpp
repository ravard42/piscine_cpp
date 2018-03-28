/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 00:59:40 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 01:15:08 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {

private:
	std::string			_type;

public:

	Weapon( std::string type );
	~Weapon( void );

	std::string const 	&getType( void ) const;
	void  				setType( std::string type);

};

#endif
