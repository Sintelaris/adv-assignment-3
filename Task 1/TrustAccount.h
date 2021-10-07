//
// Created by Sintelaris on 07.10.2021.
//

#ifndef TASK_1_TRUSTACCOUNT_H
#define TASK_1_TRUSTACCOUNT_H
#include "SavingsAccount.h"

class TrustAccount: public Account, public SavingsAccountDollar{
public:
    virtual void deposit(double add_money);
    virtual void withdraw(double withdraw_number);
};


#endif //TASK_1_TRUSTACCOUNT_H
