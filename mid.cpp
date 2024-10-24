#include<bits/stdc++.h>
using namespace std;

class Account{
    int accountNumber;
    double balance;
    public:
    Account(){}
    Account(int accountNumber,double balance){
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    void show(Account ac1, Account ac2){
        cout<<"Account Number  : "<<ac1.accountNumber<<endl;
        cout<<"Balance         : "<<ac1.balance<<endl;
        cout<<"Account Number  : "<<ac2.accountNumber<<endl;
        cout<<"Balance         : "<<ac2.balance<<endl;
        cout<<endl;
    }
friend void transfer(Account &from, Account &to,double ammount);
};
    void transfer(Account &from, Account &to,double ammount){
        if(from.balance>=ammount){
            from.balance-=ammount;
            to.balance+=ammount;
        }else{
            cout<<"Insufficient Balance"<<endl;
        }
    }

int main(){
    Account ac1(333,5000),ac2(341,5000),display;
    display.show(ac1,ac2);
    transfer(ac1,ac2,500);
    display.show(ac1,ac2);

}