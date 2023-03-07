#include <iostream>
#include "string"
using namespace std;
int main() {

    //Question1
    string name;
    int ID;
    cout<<"What is your name?";
    cin>>name;
    cout<<endl;
    cout<<"Hello Ege."<<endl<<"What is your student ID?";
    cin>>ID;
    cout<<endl;
    cout<<"Your ID is "<<ID;


    //Question2
    int var1;
    int var2;
    cout<<"Enter a value for var1:";
    cin>>var1;
    cout<<"Enter a value for var2:";
    cin>>var2;
    int sum=var1+var2;
    int diff=var1-var2;
    int prod=var1*var2;
    cout<<"var1:"<<var1<<endl;
    cout<<"var2:"<<var2<<endl;
    cout<<"sum:"<<sum<<endl;
    cout<<"diff:"<<diff<<endl;
    cout<<"prod:"<<prod<<endl;


    //Question3
    string name2;
    int labGrade;
    int midterm;
    int final;
    cout<<"Enter your name:";
    cin>>name2;
    cout<<endl;
    cout<<"Enter your lab grade:";
    cin>>labGrade;
    cout<<endl;
    cout<<"Enter your midterm:";
    cin>>midterm;
    cout<<endl;
    cout<<"Enter your final:";
    cin>>final;
    cout<<endl;

    int lastScore=(labGrade*0.25)+(midterm*0.35)+(final*0.4);

    cout<<"Name:"<<name2;
    cout<<"Lab:"<<labGrade;
    cout<<"Midterm:"<<midterm;
    cout<<"Final:"<<final;
    cout<<"Last Score:"<<lastScore;
    cout<<endl;

    //Question4
    cout<<"*\n**\n***\n**\n*";



    return 0;
}
