#include<bits/stdc++.h>
using namespace std;

/*
class has:
1. properties(data)
2. methods(function)

-class is the blueprint of an object
-object is a blueprint on a class
*/

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

        if(addmissionYear<2016){
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
Student student2;


student1.name = "Md. Arif Khan";
student1.id=1010;
student1.address = "Dhaka,Bangladesh";
student1.addmissionYear = 2010;

student2.name = "Md. Asif Khan";
student2.id=1011;
student2.address = "Rajshahi,Bangladesh";
student2.addmissionYear = 2019;

student1.displayInfo();
cout<<"---------------------------"<<endl;
student2.displayInfo();






}