//
// Created by Sintelaris on 08.10.2021.
//

#include "TrustAccount.h"
#include <iostream>
using namespace std;


TrustAccount::TrustAccount(){};

TrustAccount::TrustAccount(string name, double dollars, double euros, double tenge, double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge){
    setName(name);
    setDollars(dollars);
    setEuros(euros);
    setTengeler(tenge);
    setInterestRateDollar(interest_rate_dollar);
    setInterestRateEuro(interest_rate_euro);
    setInterestRateTenge(interest_rate_tenge);
    recalculate_balance();
}

void TrustAccount::deposit(double add_money, int choice) {
    switch (choice) {
        case 1: if(add_money > 1000){
                dollars += 10;
                cout << name << ", you've received a bonus +10!" << endl;
            }
            dollars = dollars * (1 + (interest_rate_dollar/100)) + add_money;
            break;

        case 2: if(add_money > 1000){
                euros += 10;
                cout << name << ", you've received a bonus +10!" << endl;
            }
            euros = euros * (1 + (interest_rate_euro/100)) + add_money;
            break;

        case 3: if(add_money > 1000){
                tengeler += 10;
                cout << name << ", you've received a bonus +10!" << endl;
            }
            tengeler = tengeler * (1 + (interest_rate_tenge/100)) + add_money;
            break;
    }
    recalculate_balance();
}

void TrustAccount::deposit(double add_money) {
    cout << name << ", input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice;
    cin >> choice;
    deposit(add_money, choice);
}

void TrustAccount::withdraw(double withdraw_number) {
    cout << "Input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice;
    double minimum;
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
    cout << name << ", Your total balance is " << balance << "\n Dollars: " << dollars << ", euros: " << euros << ", tenge: " << tengeler <<
         "\n Dollar's interest rate: "<< interest_rate_dollar << ", euro's interest rate: "<< interest_rate_euro << ", tenge's interest rate: " << interest_rate_tenge << endl;
}