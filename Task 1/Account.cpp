//
// Created by Sintelaris on 05.10.2021.
//

#include "Account.h"
#include <time.h>
#include <thread>
#include <chrono>

using namespace std;
Account::Account(){
    name = "Unnamed Account";
    balance = 0;
    dollars = 0;
    euros = 0;
    tenge = 0;
}

Account::Account(string name, double balance, double dollars, double euros, double tenge): name(name),
dollars(dollars), euros(euros), tenge(tenge){}

//hallo

void Account::recalculate_balance() {
    balance = dollars*425 + euros*495 + tenge;
}



