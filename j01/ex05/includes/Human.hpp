/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 00:50:31 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:56:15 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class	Human {

private:
	Brain const		_brain;

public:

	Human( void );
	~Human( void );

	Brain const		*identify( void ) const;
	Brain const		&getBrain ( void ) const;

};

#endif
