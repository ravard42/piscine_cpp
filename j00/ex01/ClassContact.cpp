/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 21:30:59 by ravard            #+#    #+#             */
/*   Updated: 2018/01/09 23:14:12 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact( void ) : isSet( -42 ) {
	std::cout << "Contact constructor called" << std::endl;
}


Contact::~Contact( void ) {
	std::cout << "Contact destructor called" << std::endl;
}

std::string	const Contact::fieldName[] = {"first name", "last name", "nickname", "login", "postal address", "email address", "phone number", "birthday date", "favorite meal", "underwear color", "darkest secret"};

void	Contact::setField(int n) {
	int		i;

	i = -1;
	while (++i < 11) {
		std::cout << Contact::fieldName[i] << "?" << std::endl;
		std::getline (std::cin, this->field[i]);
	}
	this->isSet = n;
}

void	Contact::display( void ) const {
	std::string		buff;
	std::size_t 	found; 
	int				i;

	if (this->isSet != -42) {
		std::cout << std::setw(10) << this->isSet;
		i = -1;
		while (++i < 3) {
			std::cout << '|';
			buff = this->field[i];
			while ((found = buff.find('\t')) != std::string::npos)
				buff[found] = ' ';
			if (buff.length() >= 10) {
				buff[9] = '.';
				buff.resize(10);
			}
			std::cout << std::setw(10) << buff;
		}
		std::cout << std::endl;
	}
}

void	Contact::displayAll( void ) const {
	int		i;

	i = -1;
	while (++i < 11)
		std::cout << Contact::fieldName[i] << " --> " << this->field[i] << std::endl;
}
