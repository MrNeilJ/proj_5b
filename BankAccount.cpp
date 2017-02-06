/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.5.2017
 *
 * Description: This file hosts the class functions for the
 * BankAccount.  It allows the individual to create an object
 * (blank or with input).  In here the user can pull account
 * information such as the name, id, and balance, as well as
 * adjust balance values by withdrawing and depositing into
 * the balance variable.
 *************************************************************/

#include <string>
#include "BankAccount.hpp"

// Blank constructor in case the user leaves the object blank.
BankAccount::BankAccount()
{
    name    = "";
    id      = "";
    balance = 0.00;
}

// Constructor to allow the user to add information at object creation
BankAccount::BankAccount(std::string inputName, std::string inputID, double inputBalance)
{
    name    = inputName;
    id      = inputID;
    balance = inputBalance;
}

std::string BankAccount::getCustomerName()
{
    return name;
}

std::string BankAccount::getCustomerID()
{
    return id;
}

double BankAccount::getCustomerBalance()
{
    return balance;
}

void BankAccount::withdraw(double input)
{
    balance -= input;
}

void BankAccount::deposit(double input)
{
    balance += input;
}