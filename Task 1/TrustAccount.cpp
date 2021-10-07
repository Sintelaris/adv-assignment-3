//
// Created by Sintelaris on 07.10.2021.
//

#include "TrustAccount.h"

void TrustAccount::deposit(double add_money) {
    if(balance > 1000){
        balance += 10;
    }
    balance  += balance * (1 + (dollar.interest_rate/100)) + add_money;
    recalculate_balance();
}

void TrustAccount::withdraw(double withdraw_number) {
    int minimum = balance*0.2;
    if (minimum < withdraw_number ){
        cout << "The amount of withdraw more than 20% of a balance" << endl;
    } else {
        balance -= withdraw_number;
        recalculate_balance();
    }
}
