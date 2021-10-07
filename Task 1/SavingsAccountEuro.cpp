//
// Created by Sintelaris on 05.10.2021.
//

#include "SavingsAccountEuro.h"

SavingsAccountEuro::SavingsAccountEuro(double interest_rate): interest_rate(interest_rate) {}

void SavingsAccountEuro::deposit(double add_money) {
    euros  += euros * (1 + (interest_rate/100)) + add_money;
    recalculate_balance();
}


void SavingsAccountEuro::withdraw(double withdraw_number) {
    euros -= withdraw_number;
    recalculate_balance();
}