/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:53:26 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:44:36 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class	ZombieEvent {

private:
	std::string					_eventType;
	static std::string const	bankName[];
	static int const			bankNameSize;

public:

	ZombieEvent( std::string type );
	~ZombieEvent( void );

	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name) const;
	Zombie	*randomChump( void ) const;
	

};

#endif
