//
// Created by Sintelaris on 05.10.2021.
//

#ifndef TASK_1_SAVINGSACCOUNT_H
#define TASK_1_SAVINGSACCOUNT_H

#include "Account.h"
#include "SavingsAccountDollar.h"
#include "SavingsAccountTenge.h"
#include "SavingsAccountEuro.h"


class SavingsAccount: public Account {
protected:
    void recalculate_balance();
    SavingsAccountDollar dollar;
    SavingsAccountTenge tenge;
    SavingsAccountEuro euro;

    double interest_rate_dollar, interest_rate_euro, interest_rate_tenge;
public:
    SavingsAccount();
    SavingsAccount(double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge);
    virtual void deposit(double add_money);
    virtual void withdraw(double withdraw_number);
};

#endif //TASK_1_SAVINGSACCOUNT_H
