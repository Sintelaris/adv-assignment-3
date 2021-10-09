//
// Created by Sintelaris on 08.10.2021.
//

#ifndef TASK_1_TRUSTACCOUNT_H
#define TASK_1_TRUSTACCOUNT_H

#include "SavingsAccount.h"

class TrustAccount: public SavingsAccount{
public:
    TrustAccount();
    TrustAccount(string name, double dollars, double euros, double tengeler, double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge);
    virtual void deposit(double add_money) override;
    virtual void deposit(double withdraw_number, int choice) override;
    virtual void withdraw(double withdraw_number) override;
    void printBalance() override;
};


#endif //TASK_1_TRUSTACCOUNT_H
