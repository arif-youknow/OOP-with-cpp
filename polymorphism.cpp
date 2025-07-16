#include<bits/stdc++.h>
using namespace std;

/*
Polymorphism: is the ability of a single
variable,function or object to take on multiple
forms or behaviors

-->compile time(method overloading)
--> run time (method overriding)
*/

class Print{

    public :
    void show(int x){
        cout<<"This is an integer: "<<x<<endl;
    }
    void show(string s){
        cout<<"This is a string: "<<s<<endl;
    }
    //same method with different parameter
};

class Animal{

    public:
    virtual void eat(){
        cout<<"animals can eat"<<endl;
    }

    virtual void sound(){
        cout<<"some animal can make sound"<<endl;
    }

};

class Cat : public Animal{
    public:
    void eat() override{
        cout<<"Cat can eat"<<endl;
    }
    void sound() override{
        cout<<"Cat can make sound"<<endl;
    }
};


int main(){

    //this is compile time polymorphism (method overloading):
    Print p;
    p.show(5);
    p.show("hello polymorphism");

    //this is runtime polymorphism(method overriding):

    Animal *animal;
    Cat cat;
    animal = &cat;

    animal->eat();
    animal->sound();




}