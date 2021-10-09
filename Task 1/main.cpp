#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include <vector>
using namespace std;

class Redistribute{
public:
    void redistribute(vector <Account*> &Accounts, double tenge){
        int number_of_accounts = Accounts.size();
        double tenge_to_each = tenge / number_of_accounts;
        for (int i = 0; i < number_of_accounts; i++){
            Accounts[i]->deposit(tenge_to_each, 3);
            cout << "Distributed to each account: " << tenge_to_each << endl;
        }
    }

};


int main() {
    vector <Account*> Accounts;

    cout << "Hello, World!" << std::endl;
    //SavingsAccount current = SavingsAccount(0.1, 0.1, 0.1, "asd", 1,1,1);

    Account* Dora = new SavingsAccount("Dora", 100, 20, 30000, 0.1, 0.1, 0.2);
    Dora->deposit(1000);
    Dora->printBalance();

    cout << "______________________" << endl;

    Account *Amira = new CheckingAccount("Amira", 10, 0, 10000);
    Amira->deposit(500);
    Amira->printBalance();

    cout << "______________________" << endl;

    Account *Dake = new TrustAccount("Dakekushik", 0, 0, 0, 0.0, 0.0, 0.0);
    Dake->deposit(2000);
    Dake->withdraw(200);
    Dake->printBalance();

    Accounts.push_back(Dora);
    Accounts.push_back(Amira);
    Accounts.push_back(Dake);
    Redistribute redistribution;
    redistribution.redistribute(Accounts, 300);

    cout << "______________________" << endl;

    Dora->printBalance();

    cout << "______________________" << endl;

    Amira->printBalance();

    cout << "______________________" << endl;

    Dake->printBalance();

    cout << "______________________" << endl;

    SavingsAccount Nazipow = SavingsAccount("Zizi", 10, 5, 1000, 0.2, 0.2, 0.2);
    Nazipow.printBalance();

    return 0;
}


