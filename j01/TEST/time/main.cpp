#include <iostream>
#include <time.h>       /* time_t, struct tm, time, localtime */

int main ()
{
	time_t 			rawtime;
	std::string		date;

	time (&rawtime);
	date = (std::string)asctime(localtime(&rawtime));
	std::cout << date;
	return 0;
}
