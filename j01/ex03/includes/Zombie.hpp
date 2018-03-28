/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:49:21 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:48:40 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {

private:
	std::string					_type;
	std::string					_name;

public:

	Zombie( void );
	~Zombie( void );

	void	setType( std::string type );
	void	setName( std::string name );
	void	announce( void ) const;

};

#endif
