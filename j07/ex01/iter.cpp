/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 05:07:16 by ravard            #+#    #+#             */
/*   Updated: 2018/04/05 05:09:00 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
void	iter( T * tab, int size, void(*f)(T & elem) ) {
	int		i = -1;

	while(++i < size)
		f(tab[i]);
}

template< typename T >
void	div( T & x ) {
	x /= 2;
}

int		main( void ) {
	int		itab[] = {0, 1, 2, 3, 4, 5, 6, 7};
	float	ftab[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int		i = -1;
	
	iter(itab, 8, &div< int >);
	iter(ftab, 8, &div< float >);
	
	while (++i < 8)
		std::cout << itab[i] << " ";
	std::cout << std::endl;
	
	i = -1;
	while (++i < 8)
		std::cout << ftab[i] << " ";
	std::cout << std::endl;

	return 0;
}
