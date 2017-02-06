/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.5.2017
 *
 * Description: This is the main file for testing of the
 * BankAccount class.  The tests in here are apart of the
 * examples in the guidelines for the Assignment.
 *************************************************************/

#include <iostream>
#include "BankAccount.hpp"


int main() {
    BankAccount account1("Harry Potter", "K4637", 8032.78);
    account1.withdraw(244.0);
    account1.withdraw(3012.58);
    account1.deposit(37.54);
    account1.withdraw(1807.12);
    account1.deposit(500.00);
    double finalBalance = account1.getCustomerBalance();

    // Test example
    BankAccount accountTest("Johnny Appleseed", "A1234", 2000.32);

    std::cout << "Bank Account Information:" << std:: endl;
    std::cout << "=================================" << std::endl;
    std::cout << "Name:    " << accountTest.getCustomerName() << std::endl;
    std::cout << "ID:      " << accountTest.getCustomerID() << std::endl;
    std::cout << "Balance: " << accountTest.getCustomerBalance() << std::endl;
    std::cout << "---------------------------------\n" << std::endl;

    // Adjust Balance values for accountTest
    std::cout << "...Withdrawing 500 Dollars........" << std::endl;
    accountTest.withdraw(500);
    std::cout << "Updated Balance: " << accountTest.getCustomerBalance() << std::endl;

    std::cout << "\n...Depositing 1000 Dollars........" << std::endl;
    accountTest.deposit(1000);
    std::cout << "Updated Balance: " << accountTest.getCustomerBalance() << std::endl;
    return 0;
}