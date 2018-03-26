// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

#include "Account.class.hpp"
#include <iostream>

int			Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int			Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int			Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int			Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void		Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount( initial_deposit ),
	_nbDeposits( 0 ), _nbWithdrawals( 0 ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";closed" << std::endl;
}

void		Account::makeDeposit( int deposit) {
	Account::_displayTimestamp();
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit
		<< ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool		Account::makeWithdrawal( int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount < withdrawal) {
		std::cout << "refused" << std::endl;
		return false;
	}
	else {
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
}

void		Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int			Account::_nbAccounts = 0;
int			Account::_totalAmount = 0;
int			Account::_totalNbDeposits = 0;
int			Account::_totalNbWithdrawals = 0;

static int	disp(int i)
{
	if (i < 10)
		std::cout << "0";
	return i;
}

void		Account::_displayTimestamp( void ) {
	time_t		secondes;
	struct tm	instant;

	time(&secondes);
	instant=*localtime(&secondes);
	std::cout << "[" << 1900 + instant.tm_year << disp(instant.tm_mon + 1) << disp(instant.tm_mday + 1)
		<< "_" << disp(instant.tm_hour) << disp(instant.tm_min) << disp(instant.tm_sec) << "] ";
}

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// My boss is a dick                                                          //
// ************************************************************************** //
