#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

private:
	std::string			_name;
	Weapon				*_w;

public:

	HumanB( std::string name );
	~HumanB( void );

	void			setWeapon(Weapon &w);
	void  			attack( void ) const;

};

#endif
