//
// Created by Sintelaris on 05.10.2021.
//

#include "SavingsAccountDollar.h"

SavingsAccountDollar::SavingsAccountDollar(double interest_rate): interest_rate(interest_rate) {}

void SavingsAccountDollar::deposit(double add_money) {
    dollars  += dollars * (1 + (interest_rate/100)) + add_money;
    recalculate_balance();
}

void SavingsAccountDollar::withdraw(double withdraw_number) {
    dollars -= withdraw_number;
    recalculate_balance();
}
