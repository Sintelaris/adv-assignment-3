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
    SavingsAccount(string name, double dollars, double euros, double tenge, double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge);
    virtual void deposit(double add_money) override;
    virtual void deposit(double add_money, int choice) override;
    virtual void withdraw(double withdraw_number) override;
    void printBalance() override;

    void setInterestRateDollar(double interestRateDollar);

    void setInterestRateEuro(double interestRateEuro);

    void setInterestRateTenge(double interestRateTenge);

};


#endif //TASK_1_SAVINGSACCOUNT_H
