/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 22:34:10 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:48:41 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class	ZombieHorde {

private:
	static std::string const	bankName[];
	static int const			bankNameSize;
	std::string					_hordeType;
	Zombie						*horde;

	void						randomChump (int n) const;

public:

	ZombieHorde(std::string type, int n);
	~ZombieHorde( void );

};

#endif
