/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.5.2017
 *
 * Description: This is the main file for testing of the
 * BankAccount class.  The tests in here are apart of the
 * examples in the guidelines for the Assignment.
 *************************************************************/

#include "BankAccount.hpp"


int main() {
    BankAccount account1("Harry Potter", "K4637", 8032.78);
    account1.withdraw(244.0);
    account1.withdraw(3012.58);
    account1.deposit(37.54);
    account1.withdraw(1807.12);
    account1.deposit(500.00);
    double finalBalance = account1.getCustomerBalance();

    return 0;
}