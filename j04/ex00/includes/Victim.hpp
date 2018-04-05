/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 02:46:14 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 03:59:49 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include "Character.hpp"

class Victim : public Character {

protected:
	Victim( void );

public:

	Victim( std::string name );
	Victim( Victim const & src );
	virtual ~Victim( void );

	Victim &		operator=( Victim const & src);

	virtual void	getPolymorphed( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Victim const & rhs );


#endif
