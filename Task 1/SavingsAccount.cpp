//
// Created by Sintelaris on 05.10.2021.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() {

}

SavingsAccount::SavingsAccount(double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge){
    this->interest_rate_dollar = interest_rate_dollar;
    this->interest_rate_euro = interest_rate_euro;
    this->interest_rate_tenge = interest_rate_tenge;
}


void SavingsAccount::deposit(double add_money) {
    cout << "Input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: dollar.deposit(add_money);
            break;

        case 2: euro.deposit(add_money);
            break;

        case 3: tenge.deposit(add_money);
            break;
    }
    recalculate_balance();
}

void SavingsAccount::withdraw(double withdraw_number){

}

void SavingsAccount::recalculate_balance() {
    balance = dollars*425 + euros*495 + tengeler;
}