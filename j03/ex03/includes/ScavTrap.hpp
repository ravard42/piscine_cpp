/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:38:21 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 12:47:10 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap;
typedef void(ScavTrap::*randChallenge)( std::string const & target);

class ScavTrap : public ClapTrap {

private:
	static randChallenge const		_bank[];

	void			challenge1( std::string const & target );
	void			challenge2( std::string const & target );
	void			challenge3( std::string const & target );
	void			challenge4( std::string const & target );
	void			challenge5( std::string const & target );

public:

	ScavTrap( void );
	ScavTrap( int * tab, std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap &		operator=( ScavTrap const & src);

	void			challengeNewcomer(std::string const & target);
};


#endif
