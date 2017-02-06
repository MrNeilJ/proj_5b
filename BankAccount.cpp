//
// Created by Neil Johnson on 2/5/17.
//

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