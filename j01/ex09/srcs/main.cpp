/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 02:28:59 by ravard            #+#    #+#             */
/*   Updated: 2018/03/28 02:38:27 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main() {
	Logger logger("logFile.txt");
	
	logger.log("logToConsole", "peter");
	logger.log("logToConsole", "léopol");
	logger.log("logToFile", "doubishou");
	logger.log("logToFile", "doubishou");
	
	logger.log("logToAnotherDest", "doubishou");

	return 0;
}
