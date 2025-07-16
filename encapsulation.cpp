#include<bits/stdc++.h>
using namespace std;

/*
Encapsulation: combining properties and methods
in a single class

*/

class BankAccount{
    private:
    string acNumber;
    int balance=0;

    public:
    void createAccount(string acNumber, int balance){
        this->acNumber = acNumber;
        this->balance = balance;

    }
    int getBalance(){

        return this->balance;

    }

    
};


int main(){

BankAccount easternBank;

easternBank.createAccount("104481430547", 500);


int balance = easternBank.getBalance();

cout<<balance<<endl;









}