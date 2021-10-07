//
// Created by Sintelaris on 05.10.2021.
//

#ifndef TASK_1_SAVINGSACCOUNTDOLLAR_H
#define TASK_1_SAVINGSACCOUNTDOLLAR_H
#include "SavingsAccount.h"

class SavingsAccountDollar: public SavingsAccount{
private:
    double interest_rate;
public:
    SavingsAccountDollar();
    SavingsAccountDollar(double interest_rate);
    virtual void deposit(double add_money);
    virtual void withdraw(double withdraw_number);
};


#endif //TASK_1_SAVINGSACCOUNTDOLLAR_H
