#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>

struct s_attack;

class	Human {

private:
	static s_attack	_attack[];
	static int		_n;

	void 			_meleeAttack(std::string const & target);
	void 			_rangedAttack(std::string const & target);
	void 			_intimidatingShout(std::string const & target);
	
public:

	Human( void );
	~Human( void );
		
	void action(std::string const & action_name, std::string const & target);

};

#endif
