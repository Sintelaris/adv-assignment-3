//
// Created by Sintelaris on 05.10.2021.
//

#ifndef TASK_1_SAVINGSACCOUNTEURO_H
#define TASK_1_SAVINGSACCOUNTEURO_H


#include "Account.h"

class SavingsAccountEuro: public Account {
protected:
    double interest_rate;
public:
    SavingsAccountEuro();
    SavingsAccountEuro(double interest_rate);
    virtual void deposit(double add_money);
    virtual void withdraw(double withdraw_number);
};


#endif //TASK_1_SAVINGSACCOUNTEURO_H
