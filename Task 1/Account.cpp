#include "Account.h"


Account::Account(){
    name = "Unnamed Account";
    balance = 0;
    dollars = 0;
    euros = 0;
    tengeler = 0;
}

Account::Account(string name, double dollars, double euros, double tengeler): name(name),
dollars(dollars), euros(euros), tengeler(tengeler){}

void Account::printBalance() {
    cout << "Your total balance is " << balance << "\n Dollars: " << dollars << ", euros: " << euros << ", tenge: " << tengeler << endl;
}
