#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA {

private:
	std::string			_name;
	Weapon				&_w;

public:

	HumanA( std::string name, Weapon &w );
	~HumanA( void );

	void  			attack( void ) const;

};

#endif
