//
// Created by Sintelaris on 08.10.2021.
//

#ifndef TASK_1_SAVINGSACCOUNT_H
#define TASK_1_SAVINGSACCOUNT_H

#include "Account.h"


class SavingsAccount: public Account {
protected:
    double interest_rate_dollar, interest_rate_euro, interest_rate_tenge;

public:
    SavingsAccount();
    SavingsAccount(double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge);
    virtual void deposit(double add_money);
    virtual void withdraw(double withdraw_number);
    void recalculate_balance();
    void printBalance() override;

    void setName(string Name);

    void setDollar(double Dollar);

    void setEuro(double Euro);

    void setTenge(double Tenge);

};


#endif //TASK_1_SAVINGSACCOUNT_H
