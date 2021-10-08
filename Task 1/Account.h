#ifndef TASK_1_ACCOUNT_H
#define TASK_1_ACCOUNT_H
#include <string>
#include "I_Printable.h"
#include <iostream>
using namespace std;

class Account: public I_Printable{
protected:
    string name;
    double balance, dollars, euros, tengeler;

public:
    Account();
    Account(string name, double dollars, double euros, double tenge);

    virtual void deposit(double add_money) = 0;

    virtual void withdraw(double withdraw_number) = 0;

    void printBalance();
};


#endif //TASK_1_ACCOUNT_H
