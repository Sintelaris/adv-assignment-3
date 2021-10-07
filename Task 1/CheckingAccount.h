//
// Created by Sintelaris on 07.10.2021.
//

#ifndef TASK_1_CHECKINGACCOUNT_H
#define TASK_1_CHECKINGACCOUNT_H


#include "Account.h"

class CheckingAccount: public Account {
private:
    double interest_rate;
    string name;
    double fee;
    double balance;
public:
    CheckingAccount();
    CheckingAccount(double interest_rate, string name, double fee);
    CheckingAccount(double interest_rate, string name);
    virtual void deposit(double add_money);
    virtual void withdraw(double withdraw_number);
};


#endif //TASK_1_CHECKINGACCOUNT_H
