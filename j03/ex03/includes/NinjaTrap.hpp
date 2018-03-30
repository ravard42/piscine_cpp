/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:11:37 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 13:41:54 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

public:

	NinjaTrap( void );
	NinjaTrap( int *tab, std::string name );
	NinjaTrap( NinjaTrap const & src );
	~NinjaTrap( void );

	NinjaTrap &		operator=( NinjaTrap const & src);

	void			ninjaShoebox( FragTrap const & target );
	void			ninjaShoebox( ScavTrap const & target );
	void			ninjaShoebox( NinjaTrap const & target );
};


#endif
