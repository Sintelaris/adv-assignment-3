//
// Created by Sintelaris on 05.10.2021.
//

#include "SavingsAccountTenge.h"

SavingsAccountTenge::SavingsAccountTenge() {}

SavingsAccountTenge::SavingsAccountTenge(double interest_rate): interest_rate(interest_rate) {}

void SavingsAccountTenge::deposit(double add_money) {
    tenge  += tenge * (1 + (interest_rate/100)) + add_money;
    recalculate_balance();
}

void SavingsAccountTenge::withdraw(double withdraw_number) {
    tenge -= withdraw_number;
    recalculate_balance();
}