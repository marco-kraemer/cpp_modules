/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:08:15 by maraurel          #+#    #+#             */
/*   Updated: 2021/10/28 13:08:17 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <sstream>

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit)
{
	static int	index;

	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbAccounts += 1;
	_accountIndex = index;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"<< checkAmount() << ";created" << std::endl;
	index++;
}

Account::~Account (void)
{
	_displayTimestamp();
	_nbAccounts -= 1;
	std::cout << "index:" << _accountIndex << ";amount:"<< checkAmount() << ";closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
	return;
}

int	Account::getNbWithdrawals( void )
{return (_totalNbWithdrawals);}

int	Account::getNbDeposits( void )
{return (_totalNbDeposits);}

int	Account::getTotalAmount( void )
{return (_totalAmount);}

int	Account::getNbAccounts( void )
{return (_nbAccounts);}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:"<< checkAmount() << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:"<< checkAmount() << ";nb_deposits:" << _nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"<< checkAmount();
	_amount -= withdrawal;
	if (_amount < 0)
	{
		_amount += withdrawal;
		std::cout  << ";withdrawal: refused" << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout  << ";withdrawal:" << withdrawal << ";amount:"<< checkAmount() << ";nb_withdrawal:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount( void ) const
{return (_amount);}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"<< checkAmount() << ";deposits:"
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	const auto p1 = std::chrono::system_clock::now();

	std::cout << std::chrono::duration_cast<std::chrono::seconds>(p1.time_since_epoch()).count() << " ";
}
