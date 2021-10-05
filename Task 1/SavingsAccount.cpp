//
// Created by Sintelaris on 05.10.2021.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() {

}

SavingsAccount::SavingsAccount(double interest_rate): interest_rate(interest_rate) {}

void SavingsAccount::deposit(double add_money) {
    cout << "Input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: dollars += add_money;
            break;

        case 2: euros  += add_money;
            break;

        case 3: tenge += add_money;
            break;
    }
    recalculate_balance();
}

void SavingsAccount::withdraw(double withdraw_number) {
    balance -= withdraw_number;
    recalculate_balance();
}


