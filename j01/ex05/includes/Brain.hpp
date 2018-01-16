#ifndef BRAIN_HPP
# define BRAIN_HPP

class	Brain {

private:
	std::string const	_taste;

public:

	Brain(std::string taste);
	~Brain( void );

	Brain const  		*identify() const;

};

#endif
