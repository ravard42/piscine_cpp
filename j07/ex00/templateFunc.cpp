/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 05:10:34 by ravard            #+#    #+#             */
/*   Updated: 2018/04/05 05:10:53 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	swap( T & a, T & b) {
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T	&	min( T & a, T & b) {
	return a < b ? a : b;
}

template<typename T>
T	&	max( T & a, T & b) {
	return a <= b ? b : a;
}

int		main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	a = 42;
	b = 42;
	
	min(a, b) = 21;
	std::cout << b << std::endl;
	
	b = 42;
	max(a, b) = 21;
	std::cout << b << std::endl;

	return 0;
}
