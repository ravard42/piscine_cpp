#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class	Human {

private:
	Brain const		_brain;

public:

	Human(std::string brainTaste);
	~Human( void );

	Brain const		&getBrain ( void ) const;
	Brain const		*identify( void ) const;

};

#endif
