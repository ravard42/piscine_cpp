#include "Logger.hpp"

typedef						void (Logger::*ptrM)(std::string msg);

struct						s_dest {
	std::string	const		dest;
	ptrM					log;
};

int			Logger::_n = 2;

s_dest		Logger::_dest[] = {
	{"logToConsole", &Logger::_logToConsole},
	{"logToFile", &Logger::_logToFile}
};



Logger::Logger( std::string filename ) : _filename(filename) {
	std::cout << "Logger constructor called" << std::endl;
}

Logger::~Logger( void ) {
	std::cout << "Logger destructor called" << std::endl;
}
	
void 				Logger::_logToConsole(std::string msg) {
	std::cout << msg << std::endl;	
};

void 				Logger::_logToFile(std::string msg) {
	std::ofstream	ofs(this->_filename, std::ofstream::app);

	ofs << msg << std::endl;
	ofs.close();
}

std::string			Logger::_makeLogEntry(std::string const & msg) {
	time_t 			rawtime;
	std::string 	ret;

	time (&rawtime);
	ret = (std::string)asctime(localtime(&rawtime));
	ret.resize(ret.length() - 1);
	ret += " : ";
	ret += msg;
	return ret;
};

void				Logger::log(std::string const & dest, std::string const & message) {
	std::string		msg;
	int				i = -1;

	msg = this->_makeLogEntry(message); 
	while (++i < Logger::_n)
		if (!dest.compare(_dest[i].dest))
			(this->*_dest[i].log)(msg);
}
