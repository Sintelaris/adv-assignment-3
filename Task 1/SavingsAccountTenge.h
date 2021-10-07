//
// Created by Sintelaris on 05.10.2021.
//

#ifndef TASK_1_SAVINGSACCOUNTTENGE_H
#define TASK_1_SAVINGSACCOUNTTENGE_H


#include "Account.h"

class SavingsAccountTenge: public Account {
protected:
    double interest_rate;
public:
    SavingsAccountTenge();
    SavingsAccountTenge(double interest_rate);
    virtual void deposit(double add_money);
    virtual void withdraw(double withdraw_number);
};


#endif //TASK_1_SAVINGSACCOUNTTENGE_H
