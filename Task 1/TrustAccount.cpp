//
// Created by Sintelaris on 08.10.2021.
//

#include "TrustAccount.h"
#include <iostream>
using namespace std;


TrustAccount::TrustAccount(){};

void TrustAccount::deposit(double add_money) {
    cout << "Input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: if(dollars > 1000){
                dollars += 10;
            }
            dollars += dollars * (1 + (interest_rate_dollar/100)) + add_money;
            break;

        case 2: if(euros > 1000){
            euros +=10;
        }
            euros += euros * (1 + (interest_rate_euro/100)) + add_money;
            break;

        case 3: if(tengeler > 1000){
                tengeler +=10;
            }
            tengeler += tengeler * (1 + (interest_rate_tenge/100)) + add_money;
            break;
    }
    recalculate_balance();
}

void TrustAccount::withdraw(double withdraw_number) {
    cout << "Input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice, minimum;
    cin >> choice;
    switch (choice) {
        case 1:
            minimum = dollars*0.2;
            if (minimum < withdraw_number ){
                cout << "The amount of withdraw is more than 20% of a balance" << endl;
            } else
            dollars -= withdraw_number;
            break;

        case 2: minimum = euros*0.2;
            if (minimum < withdraw_number ){
                cout << "The amount of withdraw is more than 20% of a balance" << endl;
            } else
                euros -= withdraw_number;
            break;

        case 3: minimum = tengeler*0.2;
            if (minimum < withdraw_number ){
                cout << "The amount of withdraw is more than 20% of a balance" << endl;
            } else
                tengeler -= withdraw_number;
            break;
    }
    recalculate_balance();
}
void TrustAccount::printBalance() {
    printBalance();
}