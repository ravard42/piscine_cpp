#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie {

private:
	std::string					_type;
	std::string					_name;

public:

	Zombie( void );
	~Zombie( void );

	void						setType(std::string type);
	void						setName(std::string name);
	void						announce( void ) const;

};

#endif
