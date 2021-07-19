/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:21:20 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/19 12:47:30 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

Account::Account (int initial_deposit)
{
	std::cout << "Created " << std::endl;
	_amount = initial_deposit;
}

Account::~Account (void)
{
	std::cout << "Destroyed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "displayAccountsInfos" << std::endl;
	return;
}

int	Account::getNbWithdrawals( void )
{
	std::cout << "getNbWithdrawals" << std::endl;
	return (0);
}

int	Account::getNbDeposits( void )
{
	std::cout << "getNbDeposits" << std::endl;
	return (0);
}

int	Account::getTotalAmount( void )
{
	std::cout << "getTotalAmount" << std::endl;
	return (0);
}

int	Account::getNbAccounts( void )
{
	std::cout << "getNbAccounts" << std::endl;
	return (0);
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "makeDeposit" << std::endl;
	deposit++;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "makeDeposit" << std::endl;
	withdrawal++;
	return (true);
}

int	Account::checkAmount( void ) const
{
	std::cout << "checkAmount" << std::endl;
	return (0);
}

void	Account::displayStatus( void ) const
{
	std::cout << "displayStatus" << std::endl;
	return ;
}
