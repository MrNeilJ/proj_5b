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

/**************************************************************
 * Description: Blank constructor in case the user leaves the
 * object blank.
**************************************************************/
BankAccount::BankAccount()
{
    name    = "";
    id      = "";
    balance = 0.00;
}

/**************************************************************
 * Description: Constructor to allow the user to add
 * information at object creation
**************************************************************/
BankAccount::BankAccount(std::string inputName, std::string inputID, double inputBalance)
{
    name    = inputName;
    id      = inputID;
    balance = inputBalance;
}

/**************************************************************
 * Description: Function that allows the user to access the
 * private name value in BankAccount Object
**************************************************************/
std::string BankAccount::getCustomerName()
{
    return name;
}

/**************************************************************
 * Description: Function that allows the user to access the
 * private id value in the BankAccount Object
**************************************************************/
std::string BankAccount::getCustomerID()
{
    return id;
}

/**************************************************************
 * Description: Function that allows the user to access the
 * private balance value in the BankAccount Object
**************************************************************/
double BankAccount::getCustomerBalance()
{
    return balance;
}

/**************************************************************
 * Description: Function that allows the user to alter the
 * value stored in balance by subtracting input value
**************************************************************/
void BankAccount::withdraw(double input)
{
    balance -= input;
}

/**************************************************************
 * Description: Function that allows the user to alter the
 * value stored in balance by adding input value
**************************************************************/
void BankAccount::deposit(double input)
{
    balance += input;
}