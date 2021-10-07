//
// Created by Sintelaris on 05.10.2021.
//

#ifndef TASK_1_SAVINGSACCOUNT_H
#define TASK_1_SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount: public Account {
protected:
    double interest_rate;
    void recalculate_balance();
public:
    SavingsAccount();
    SavingsAccount(double interest_rate);
    virtual void deposit(double add_money);
    virtual void withdraw(double withdraw_number);
};

#endif //TASK_1_SAVINGSACCOUNT_H
