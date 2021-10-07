//
// Created by Sintelaris on 05.10.2021.
//

#include "SavingsAccountDollar.h"

void SavingsAccountDollar::deposit(double add_money) {
    dollars  += dollars * (1 + (interest_rate_dollar/100)) + add_money;
}

void SavingsAccountDollar::withdraw(double withdraw_number) {
    dollars -= withdraw_number;
}
