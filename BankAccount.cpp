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
BankAccount::BankAccount(string inputName, string inputID, double inputBalance)
{
    name    = inputName;
    id      = inputID;
    balance = inputBalance;
}

string BankAccount::getCustomerName()
{

}

string BankAccount::getCustomerID()
{

}

double BankAccount::getCustomerBalance()
{

}

double BankAccount::withdraw(double)
{

}

double BankAccount::deposit(double)
{

}