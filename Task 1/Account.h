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

    virtual void deposit(double withdraw_number, int choice) = 0;

    void recalculate_balance();

    void printBalance();

    void setName(const string &name);

    void setBalance(double balance);

    void setDollars(double dollars);

    void setEuros(double euros);

    void setTengeler(double tengeler);
};


#endif //TASK_1_ACCOUNT_H
