/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:53:21 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/11/07 20:53:24 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"


    int Account::_nbAccounts = 0;
    int Account::_totalAmount = 0;
    int Account::_totalNbDeposits = 0; 
    int Account::_totalNbWithdrawals = 0;
    //Constructor

    Account::Account(int initial_deposit)
    {
        _accountIndex = _nbAccounts;
	    _amount = initial_deposit;
	    _nbDeposits = 0;
	    _nbWithdrawals = 0;
        _nbAccounts++;
        _totalAmount += _amount;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    }

    //Destructor
    Account::~Account()
    {
        _totalAmount -= _amount;
        _nbAccounts--;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    }
    
    void	Account::displayStatus(void) const
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
    }

    void	Account::_displayTimestamp( void )
    {
        time_t timeInSeconds;
        struct tm *timeInVars;
        char finalTime[16];

        timeInSeconds = time(NULL);
        timeInVars = localtime(&timeInSeconds);
        strftime(finalTime, sizeof(finalTime), "%Y%m%d_%H%M%S", timeInVars);
        std::cout << "[" << finalTime << "] ";
    }

    int	Account::getNbAccounts( void )
    {
        return (_nbAccounts);
    }
	int	Account::getTotalAmount( void )
    {
        return (_totalAmount);
    }
	int	Account::getNbDeposits( void )
    {
        return (_totalNbDeposits);
    }
	int	Account::getNbWithdrawals( void )
    {
        return (_totalNbWithdrawals);
    }

	void	Account::displayAccountsInfos( void )
    {
        std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
    }


    void	Account::makeDeposit(int deposit)
    {
        int p_amount;

        _displayTimestamp();
        p_amount = _amount;
        _amount += deposit;
        _totalNbDeposits++;
        _nbDeposits++;
        _totalAmount += deposit;
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    }
    
	bool	Account::makeWithdrawal(int withdrawal)
    {
        int p_amount;

        _displayTimestamp();
        p_amount = _amount;
        if (_amount - withdrawal < 0)
        {
            std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
            return (false);
        }
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }

	int		Account::checkAmount( void ) const
    {
        return (_amount);
    }
    
	