#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student {
    public:
    string name;
    int age;
    bool gender;

    void printInfo() {
        cout<<"Your name: "<<name<<endl;        
        cout<<"Your age: "<<age<<endl;
        cout<<"Your gender: "<<gender<<endl;
    }
};

int main() 
{
    student arr[3];
    for(int i=0; i<3; i++) {
        cout<<"Enter name: "<<endl;
        cin>>arr[i].name;
        cout<<"Enter age: "<<endl;
        cin>>arr[i].age;
        cout<<"Enter gender: "<<endl;
        cin>>arr[i].gender;
    }
    for(int i=0; i<3; i++) {
        arr[i].printInfo();
    }
}