//
// Created by Sintelaris on 05.10.2021.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() {

}

SavingsAccount::SavingsAccount(double interest_rate): interest_rate(interest_rate) {}


void SavingsAccount::deposit(double add_money) {

}

void SavingsAccount::withdraw(double withdraw_number){

}

void SavingsAccount::recalculate_balance() {
    balance = dollars*425 + euros*495 + tenge;
}