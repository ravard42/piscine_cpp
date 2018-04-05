/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 02:25:36 by ravard            #+#    #+#             */
/*   Updated: 2018/03/31 02:56:25 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

class Character {

protected:
	std::string					_name;

	Character( void );
public:

	Character( std::string name );
	Character( Character const & src );
	virtual ~Character( void );

	Character &		operator=( Character const & src);

	std::string		getName( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Character const & rhs );


#endif
