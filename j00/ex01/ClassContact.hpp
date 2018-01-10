/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 21:30:52 by ravard            #+#    #+#             */
/*   Updated: 2018/01/09 23:07:53 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

#include <iostream>
#include <iomanip>

class		Contact {

public:

	static std::string const	fieldName[];
	std::string 				field[11];
	int							isSet;

	Contact( void );
	~Contact( void );

	void	setField(int n);
	void	display( void ) const;
	void	displayAll( void ) const;
};

#endif
