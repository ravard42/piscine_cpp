/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 02:28:56 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 02:33:01 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <time.h>

struct s_dest;

class	Logger {

private:
	static s_dest		_dest[];
	static int			_n;
	std::string const	_filename;

	void 				_logToConsole(std::string msg);
	void 				_logToFile(std::string msg);
	std::string			_makeLogEntry(std::string const msg);

public:

	Logger( std::string filename );
	~Logger( void );
		
	void				log(std::string const & dest, std::string const & message);

};

#endif
