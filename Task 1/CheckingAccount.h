//
// Created by Sintelaris on 08.10.2021.
//

#ifndef TASK_1_CHECKINGACCOUNT_H
#define TASK_1_CHECKINGACCOUNT_H
#include "Account.h"

class CheckingAccount: public Account  {

    protected:
        double fee = 1.5;
        double interest_rate_dollar, interest_rate_euro, interest_rate_tenge;
    public:
        CheckingAccount();
        CheckingAccount(string name, double dollars, double euros, double tenge);

        virtual void deposit(double add_money) override;
        virtual void withdraw(double withdraw_number) override;
        virtual void deposit(double add_money, int choice) override;
        void printBalance() override;
};




#endif //TASK_1_CHECKINGACCOUNT_H
