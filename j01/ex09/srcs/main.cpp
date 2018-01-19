#include "Logger.hpp"

int main() {
	Logger logger("logFile.txt");
	
	logger.log("logToConsole", "peter");
	logger.log("logToConsole", "léopol");
	logger.log("logToFile", "doubishou");
	logger.log("logToFile", "doubishou");

	return 0;
}
