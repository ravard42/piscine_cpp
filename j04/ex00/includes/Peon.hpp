/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 03:45:26 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 04:00:13 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {

protected:
	Peon( void );

public:

	Peon( std::string name );
	Peon( Peon const & src );
	virtual ~Peon( void );

	Peon &			operator=( Peon const & src);

	virtual void	getPolymorphed( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Peon const & rhs );


#endif

