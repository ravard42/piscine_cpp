/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 02:00:51 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 03:41:28 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Character.hpp"
#include "Victim.hpp"

class Sorcerer : public Character {

protected:
	std::string					_title;
	
	Sorcerer( void );

public:

	Sorcerer( std::string name, std::string title );
	Sorcerer( Sorcerer const & src );
	virtual ~Sorcerer( void );

	Sorcerer &		operator=( Sorcerer const & src);

	std::string		getTitle( void ) const;
	void 			polymorph( Victim const & ) const ;
};

std::ostream &	operator<<( std::ostream & o, Sorcerer const & rhs );


#endif
