
#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double bal;

public:

    BankAccount(int accNum, double currentBalance) {
        accountNumber = accNum;
        bal = currentBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            bal += amount;
            std::cout << "Deposited " << amount << " into account no. " << accountNumber << std::endl;
        } else {
            std::cout << "Invalid deposit amount" << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && bal >= amount) {
            bal -= amount;
            std::cout << "Withdrawn " << amount << " from account no. " << accountNumber << std::endl;
        } else if (amount <= 0) {
            std::cout << "Invalid withdrawal amount." << std::endl;
        } else {
        std::cout << "Insufficient balance " << amount << " from account " << accountNumber << std::endl;
        }
    }

    double getBalance() {
        return bal;
    }
};

int main() {

    BankAccount myAccount(1002345, 100.0);


    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    std::cout << "Current Balance: " << myAccount.getBalance() << std::endl;

    return 0;
}
