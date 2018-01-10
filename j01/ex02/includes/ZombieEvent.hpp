#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

class	ZombieEvent {

private:
	std::string					_eventType;
	static std::string const	bankName[];


public:

	ZombieEvent(std::string type);
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump(void);
	

};

#endif
