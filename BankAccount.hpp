//
// Created by Neil Johnson on 2/5/17.
//
#include<string>

#ifndef PROJ_5B_BANKACCOUNT_HPP
#define PROJ_5B_BANKACCOUNT_HPP


class BankAccount {
private:
    string name;
    string id;
    double balance;


public:
    // Blank constructor in case the user puts in nothing
    BankAccount();

    // Filled constuctor in case the user adds in information
    BankAccount(string, string, double);

    // Returns name saved in object
    string getCustomerName()

    // Returns customer ID save in object
    string getCustomerID()

    // Returns current balance saved in the balance variable
    double getCustomerBalance()

    // Pulls a value from the input and subtracts the
    // value from the balance variable
    double withdraw(double)

    // Pulls a value from the input and adds the value
    // to the balance variable.
    double deposit(double)
};


#endif //PROJ_5B_BANKACCOUNT_HPP
