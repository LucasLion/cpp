/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:02:50 by llion             #+#    #+#             */
/*   Updated: 2023/06/15 18:50:33 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>

Account::Account(int initial_deposit) {
	std::cout << "[02302948_234098] index " << _accountIndex;
	std::cout << ";amount" << _totalAmount << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account() {
	std::cout << "[02302948_234098] index " << _accountIndex;
	std::cout << ";amount" << _totalAmount << ";closed" << std::endl;
	Account::_nbAccounts--;
}

int	Account::getNbAccounts(void) { return Account::_nbAccounts; }
int	Account::getTotalAmount(void) { return Account::_totalAmount; }
int	Account::getNbDeposits(void) { return Account::_totalNbDeposits; }
int	Account::getNbWithdrawals(void) { return Account::_totalNbWithdrawals; }

int	Account::_nbAccounts = 0;
