//
// Created by Sintelaris on 05.10.2021.
//

#ifndef TASK_1_ACCOUNT_H
#define TASK_1_ACCOUNT_H
#include <string>
#include <iostream>
using namespace std;

class Account {
protected:
    string name;
    double balance, dollars, euros, tenge;

public:
    Account();
    Account(string name, double balance, double dollars, double euros, double tenge);

    virtual void deposit(double add_money) = 0;

    virtual void withdraw(double withdraw_number) = 0;
};


#endif //TASK_1_ACCOUNT_H
