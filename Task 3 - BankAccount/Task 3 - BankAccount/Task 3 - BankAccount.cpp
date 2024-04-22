#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string clientName;
    string accountNumber;
    double balance;

public:
    BankAccount(string name, string accNum, double initBalance)
    {
        clientName = name;
        accountNumber = accNum;
        balance = initBalance;
    }

    void displayAccount()
    {
        cout << "Client Name: " << clientName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit of " << amount << " successfully made." << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successfully made." << endl;
        }
        else
        {
            cout << "Insufficient funds." << endl;
        }
    }
};

int main() {
    BankAccount account("John Doe", "123456789", 1000.0);
    account.displayAccount();

    account.deposit(500.0);
    account.displayAccount();

    account.withdraw(200.0);
    account.displayAccount();

    account.withdraw(2000.0);
    account.displayAccount();

    return 0;
}
