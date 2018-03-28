/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 00:50:17 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 00:56:14 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void ) {
	std::cout << "Human constructor called" << std::endl;
}

Human::~Human( void ) {
	std::cout << "Human destructor called" << std::endl;
}

Brain const 		*Human::identify() const{
	return this->_brain.identify();
};

Brain const			&Human::getBrain ( void ) const{
	return this->_brain;
}

