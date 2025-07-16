#include<bits/stdc++.h>
using namespace std;

/*
inheritance: is a  mechanism that allows a new class to inherit
properties and methods from existing class

--> multiple inheritance
--> multilevel inheritance
*/

class Animal{

    public:

    void eat(){

        cout<<"Animal eating"<<endl;
    }
};

class Dog : public Animal{

    public:
    void bark(){
        cout<<"Dog is Barking"<<endl;
    }

};


int main(){


Dog d;

d.bark();
d.eat(); //inherited method





}