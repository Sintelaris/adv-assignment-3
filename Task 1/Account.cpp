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

void Account::setName(const string &name) {
    Account::name = name;
}

void Account::setBalance(double balance) {
    Account::balance = balance;
}

void Account::setDollars(double dollars) {
    Account::dollars = dollars;
}

void Account::setEuros(double euros) {
    Account::euros = euros;
}

void Account::setTengeler(double tengeler) {
    Account::tengeler = tengeler;
}

void Account::recalculate_balance() {
    balance = dollars*425 + euros*495 + tengeler;
}

void Account::printBalance() {
    cout << "Your total balance is " << balance << "\n Dollars: " << dollars << ", euros: " << euros << ", tenge: " << tengeler << endl;
}
