/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 08:30:15 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 12:47:00 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

class FragTrap;
typedef void(FragTrap::*randAttack)( std::string const & target);

class FragTrap : public ClapTrap {

private:
	static randAttack const		_bank[];

	void			attack1( std::string const & target );
	void			attack2( std::string const & target );
	void			attack3( std::string const & target );
	void			attack4( std::string const & target );
	void			attack5( std::string const & target );

public:

	FragTrap( void );
	FragTrap( int *tab, std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap &		operator=( FragTrap const & src);

	void			vaulthunter_dot_exe(std::string const & target);
};


#endif
