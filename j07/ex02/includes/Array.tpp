/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 05:52:19 by ravard            #+#    #+#             */
/*   Updated: 2018/04/05 09:53:24 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <exception>
#include <iostream>

template< typename T >
class Array {

private:
	unsigned int		_size;
	T	*				_tab;
	T	&				_default;

public:
	
	Array( void );
	Array( unsigned int n );
	Array( Array const & src );
	virtual ~Array( void );

	Array &					operator=( Array const & src );

	T				&		operator[](size_t i) const;
	unsigned int 	 		size( void ) const;

};

template< typename T >
Array<T>::Array( void ) : _size(0), _tab(NULL), _default(*(new T())) {
	std::cout << "default constructor called" << std::endl;
}

template< typename T >
Array<T>::Array( unsigned int n ) : _size(n), _tab(new T[n]()), _default(*(new T())) { 
	std::cout << "parametric constructor called" << std::endl;
}

template< typename T >
Array<T>::Array( Array const & src ) : _size(src.size()), _tab(new T[_size]()), _default(*(new T())) {
	std::cout << "copy constructor called" << std::endl;
	*this = src;
}


template< typename T >
Array<T>::~Array( void ) {
	std::cout << "destructor called" << std::endl; 
	delete [] this->_tab;
	delete &this->_default;
}

template< typename T >
Array<T> &	Array<T>::operator=( Array<T> const & src ) {
	unsigned int		i = -1;

	if (this->_size != src.size())
	{
		delete [] this->_tab;
		this->_size = src.size();
		this->_tab = new T[this->_size]();
	}
	while (++i < this->_size)
		this->_tab[i] = src[i];
	return *this;
}

template< typename T >
T	 &			Array<T>::operator[](size_t i) const {

	try {
		if ( i >= this->_size )
			throw(std::exception());
		return this->_tab[i]; 
	}
	catch (std::exception & e) {
		std::cout << "out of the limit, exception thrown and catched" << std::endl;
		return this->_default;
	};
}

template< typename T >
unsigned int 	Array<T>::size( void ) const {
	return this->_size;
}

template< typename T>
std::ostream &	operator<<( std::ostream & o, Array<T> & a) {
	unsigned int		i = -1;
	
	while(++i < a.size())
		o << a[i] << std::endl;
	return o;
}


#endif
