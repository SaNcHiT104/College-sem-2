#include <iostream>
#include <cstring>
#define max 2
using namespace std;

class Account
{
    char name[20];
    long accountNo;
    char type;
    float balance;

public: 
    Account();
    void display();
    void deposit(float amount)
    {
        balance += amount;
    }
    long accountNumber() // inline functions
    {
        return accountNo;
    }
    void bal()
    {
        cout << "Balance is " << balance << endl;
    }
    void withdraw(float);
};

Account::Account() // default consrtuctor
{
    cout << "Enter name: ";
    fflush(stdin);
    gets(name);
    cout << "Enter account number: ";
    cin >> accountNo;
    cout << "Enter account type: ";
    cin >> type;
    cout << "Enter balance";
    cin >> balance;
}
void Account::display() //outline functions
{
    cout << "Name: " << name << endl;
    cout << "Account number: " << accountNo << endl;
    cout << "Type of account: " << type << endl;
    cout << "Balance: " << balance << endl;
}
void Account::withdraw(float amount)
{
    bal();
    if (balance - amount > 1000)
    {
        balance -= amount;
        cout << "Withdrawn" << endl;
        bal();
    }
    else
    {
        cout << "Insufficient Balance" << endl;
    }
}

int main()
{
    int choice;
    float amount;
    long accountNo;
    int x = 0;
    Account *A[max]; //dynamically made
    for (int i = 0; i < max; i++)
    {
        cout << "Enter details for account " << i << endl;
        A[i] = new Account; //storage acquired
    }
    while (1) //menu
    {
        cout << "1: Withdraw\n2: Deposit\n3: Display\n4: Exit\nEnter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter account number: ";
            cin >> accountNo;
            x = 0;
            for (int i = 0; i < max; i++)
            {
                if (A[i]->accountNumber() == accountNo)
                {
                    x = 1;
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    A[i]->withdraw(amount);
                }
            }
            if (x == 0)
            {
                cout << "Account not found\n";
            }
            break;
        case 2:
            cout << "Enter account number: ";
            cin >> accountNo;
            x = 0;
            for (int i = 0; i < max; i++)
            {
                if (A[i]->accountNumber() == accountNo)
                {
                    x = 1;
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    A[i]->deposit(amount);
                }
            }
            if (x == 0)
            {
                cout << "Account not found\n";
            }
            break;
        case 3:
            cout << "Enter account number: ";
            cin >> accountNo;
            x = 0;
            for (int i = 0; i < max; i++)
            {
                if (A[i]->accountNumber() == accountNo)
                {
                    x = 1;
                    A[i]->display();
                }
            }
            if (x == 0)
            {
                cout << "Account not found\n";
            }
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }
    return 0;
}
