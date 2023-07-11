/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:07:06 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/11 18:02:35 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account( int initial_deposit) {
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_totalAmount += _amount;
	_nbAccounts++;
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";"
		<< "created" << std::endl;
}

Account::~Account( void ) {
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";"
		<< "closed" << std::endl;
};

void	Account::makeDeposit( int deposit ) {
	_nbDeposits = deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_nbWithdrawals = withdrawal;
	return (_nbWithdrawals);
}

void	Account::displayStatus(void) const {
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	std::cout << "accounts:" << "8" << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}