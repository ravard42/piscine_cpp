#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie {

private:
	std::string					_type;
	std::string					_name;

public:
	static std::string const	bankType[];

	Zombie(std::string type, std::string name);
	~Zombie();

	void	announce( void ) const;

};

#endif
