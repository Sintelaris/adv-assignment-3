//
// Created by Sintelaris on 07.10.2021.
//

#include "CheckingAccount.h"




CheckingAccount::CheckingAccount(double interest_rate, string name, double fee): interest_rate(interest_rate), name(name), fee(fee) {};
CheckingAccount::CheckingAccount(double interest_rate, string name): interest_rate(interest_rate), name(name), fee(1.5) {};

CheckingAccount::CheckingAccount(){};

void CheckingAccount::deposit(double add_money) {
    balance += add_money;
};

void CheckingAccount::withdraw(double withdraw_number) {
    balance = balance - (withdraw_number * (100 + fee) / 100);
}





