#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
class Redistribute{
public:
    void redistribute(SavingsAccount &first, SavingsAccount &second, int transaction_number){
        first.withdraw(transaction_number);
        second.deposit(transaction_number);
    }
    void redistribute(CheckingAccount &first, CheckingAccount &second, int transaction_number){
        first.withdraw(transaction_number);
        second.deposit(transaction_number);
    }
    void redistribute(TrustAccount &first, TrustAccount &second, int transaction_number){
        first.withdraw(transaction_number);
        second.deposit(transaction_number);
    }
    void redistribute(Account &first, Account &second, int transaction_number){
        first.withdraw(transaction_number);
        second.deposit(transaction_number);
    }
};




using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    //SavingsAccount current = SavingsAccount(0.1, 0.1, 0.1, "asd", 1,1,1);

    SavingsAccount* Dora_SA = new SavingsAccount("Dora", 1500, 20, 30000, 0.1, 0.1, 0.2);
    Dora_SA->deposit(1000);
    Dora_SA->printBalance();
    //Account *Dora = &Dora_SA;
    //Dora->deposit(1100);
    //Dora->printBalance();

    //Account *Amira = &current;
    return 0;
}
