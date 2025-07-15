#include<bits/stdc++.h>
using namespace std;

//class defination

class Student{

public:
    //properties
    string name;
    int id;
    string address;
    int addmissionYear;

    //methods

    void isCurrentStudent(){

        if(this->addmissionYear<2016){
            cout<<"Alumnai"<<endl;
        }
        else{
            cout<<"Current Student"<<endl;
        }
        
    }

    void displayInfo(){

        cout<<name<<endl;
        cout<<id<<endl;
        cout<<address<<endl;
        cout<<addmissionYear<<endl;
        isCurrentStudent();
    }


};

int main(){

//object creation
Student student1;

student1.name = "Md. Arif Khan";
student1.id=1010;
student1.address = "Dhaka,Bangladesh";
student1.addmissionYear = 2010;

student1.displayInfo();






}