//
// Created by Sintelaris on 08.10.2021.
//

#include "CheckingAccount.h"
CheckingAccount::CheckingAccount() {

}

void CheckingAccount::deposit(double add_money) {
    cout << "Input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: dollars = dollars + add_money;
            break;

        case 2: euros  += euros + add_money;
            break;

        case 3: tengeler += tengeler + add_money;
            break;
    }
    recalculate_balance();
}

void CheckingAccount::withdraw(double withdraw_number){
    cout << "Input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: dollars = dollars - (withdraw_number * ((100 + fee)/100));
            break;

        case 2: euros  += euros - (withdraw_number * ((100 + fee)/100));
            break;

        case 3: tengeler += tengeler - (withdraw_number * ((100 + fee)/100));
            break;
    }
    recalculate_balance();
}
void CheckingAccount::printBalance() {
    printBalance();
}

void CheckingAccount::recalculate_balance() {
    balance = dollars*425 + euros*495 + tengeler;
}