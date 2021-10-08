//
// Created by Sintelaris on 08.10.2021.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() {

}

SavingsAccount::SavingsAccount(string name, double dollars, double euros, double tenge, double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge):interest_rate_dollar(interest_rate_dollar), interest_rate_euro(interest_rate_euro), interest_rate_tenge(interest_rate_tenge){
    setName(name);
    setDollars(dollars);
    setEuros(euros);
    setTengeler(tenge);
    recalculate_balance();
}

void SavingsAccount::deposit(double add_money) {
    cout << "Input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: dollars = dollars * (1 + (interest_rate_dollar/100)) + add_money;
            break;

        case 2: euros  += euros * (1 + (interest_rate_euro/100)) + add_money;
            break;

        case 3: tengeler += tengeler * (1 + (interest_rate_tenge/100)) + add_money;
            break;
    }
    recalculate_balance();
}

void SavingsAccount::withdraw(double withdraw_number){
    cout << "Input the currency: \n 1 for dollars, 2 for euros, 3 for tenge" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: dollars = dollars - withdraw_number;
            break;

        case 2: euros  += euros - withdraw_number;
            break;

        case 3: tengeler += tengeler - withdraw_number;
            break;
    }
    recalculate_balance();
}

void SavingsAccount::setInterestRateDollar(double interestRateDollar) {
    interest_rate_dollar = interestRateDollar;
}

void SavingsAccount::setInterestRateEuro(double interestRateEuro) {
    interest_rate_euro = interestRateEuro;
}

void SavingsAccount::setInterestRateTenge(double interestRateTenge) {
    interest_rate_tenge = interestRateTenge;
}

void SavingsAccount::printBalance() {
    cout << "Your total balance is " << balance << "\n Dollars: " << dollars << ", euros: " << euros << ", tenge: " << tengeler <<



}