/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:49:21 by ravard            #+#    #+#             */
/*   Updated: 2018/03/27 23:23:53 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {

private:
	std::string const			_type;
	std::string	const			_name;

public:

	Zombie(std::string type, std::string name);
	~Zombie( void );

	void	announce( void ) const;

};

#endif
