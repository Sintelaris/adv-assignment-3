//
// Created by Sintelaris on 08.10.2021.
//

#include "CheckingAccount.h"
CheckingAccount::CheckingAccount() {

}

CheckingAccount::CheckingAccount(string name, double dollars, double euros, double tengeler){
    setName(name);
    setDollars(dollars);
    setEuros(euros);
    setTengeler(tengeler);
    recalculate_balance();
}

void CheckingAccount::deposit(double add_money) {
    cout << name << ", input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
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

        case 2: euros  = euros - (withdraw_number * ((100 + fee)/100));
            break;

        case 3: tengeler = tengeler - (withdraw_number * ((100 + fee)/100));
            break;
    }
    recalculate_balance();
}

void CheckingAccount::deposit(double add_money, int choice) {
    switch (choice) {
        case 1: dollars += add_money;
            break;

        case 2: euros  += add_money;
            break;

        case 3: tengeler += add_money;
            break;
    }
    recalculate_balance();
}

void CheckingAccount::printBalance() {
    cout << name << ", Your total balance is " << balance << "\n Dollars: " << dollars << ", euros: " << euros << ", tenge: " << tengeler << ", fee: " << fee << endl;
}

