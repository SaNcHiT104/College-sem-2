#include<iostream>
using namespace std;
class account{
    private:
    char name[20];
    long accountNo;
    char acctype;
    int balance;
    public:
    void initialize();
    void deposit(int a);
    void withdraw(int a);
    void displayAll();
    void displayBal(){
        cout<<"\nYour current balance is \n"<<balance;
    }
    long getacc(){
        return accountNo;
    }   
};
void account::initialize(){
    cout<<"Enter your name \n";
    cin>>name;
    cout<<"\n Enter your account number \n";
    cin>>accountNo;
    cout<<"\nEnter your acctype S or C \n";
    cin>>acctype;
    cout<<"\nEnter your balance \n";
    cin>>balance;
}
void account::deposit(int a){
    displayBal();
    balance+=a;
    displayBal();
}
void account::withdraw(int a){
    displayBal();
    if(balance-a>=1000){
        balance-=a;
        cout<<"\n Successfull transaction";
    }
    displayBal();
}
void account::displayAll(){
    cout<<"your name \n"<<name;
    cout<<"\n your account number \n"<<accountNo;
    cout<<" your acctype\n"<<acctype;
    cout<<"your balance \n"<<balance;
}
int main(){
    account A[3];
    int i,j,flag,choice,amt;
    long accNo;
    for(i=0;i<3;i++){
        cout<<"Enter details";
        A[i].initialize();
    }
}