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
