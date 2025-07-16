#include<bits/stdc++.h>
using namespace std;

/*

Abstruction: is the concept of hiding complex implementation details
and exposing only the necessary information to the user

*/

class AtmBooth{
    private:
    int balance = 1000;
    string userPin = "1234";

    public:
    void withdrawMoney(int ammount, string pin){

        if(checkBalance(ammount) && cardPin(pin)){
            cout<<"Withdraw successful"<<endl;
        }
        else{
            cout<<"Withdraw faild"<<endl;
        }

    }

    private:
    bool cardPin(string pin){
        if(pin==userPin){
            return true;
        }
        else{
            return false;
        }
    }
    bool checkBalance(int ammount){
       if(balance >= ammount){
        return true;
       }
       else{
        return false;
       }
    }

};


int main(){

AtmBooth userRequest;

userRequest.withdrawMoney(500, "1234");



}