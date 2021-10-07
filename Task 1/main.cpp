#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "SavingsAccountDollar.h"
#include "SavingsAccountEuro.h"
#include "SavingsAccountTenge.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"



int main() {

    SavingsAccount check1 = SavingsAccountDollar(0.1);
    SavingsAccount check2 = SavingsAccountEuro(0.1);
    SavingsAccount check3 = SavingsAccountTenge(0.1);


    return 0;
}
