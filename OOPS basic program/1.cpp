//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator{
    public:
    int a,b;  //data members
    public:
    int result(){
        cout<<"Enter number 1: "<<endl;
        cin>>a;
        cout<<"Enter number 2: "<<endl;
        cin>>b;
    }
    int sum(){
        cout<<"\nAddition : "<<a+b<<endl;
    }
    int sub(){
        cout<<"\nsubtraction : "<<a-b<<endl;
    }
    int mul(){
        cout<<"\nMultiplication : "<<a*b<<endl;
    }
    int div(){
        if(b && a!=0){
        cout<<"\nDivision :"<<a/b<<endl;
        }
        else{
            cout<<"\nError!!! 0 is not divisable."<<endl;
        }   
    }

};
int main(){
    int choice;
    calculator res;
    do{
        cout<<endl;
        cout<<"1.Addition."<<endl;
        cout<<"2.Subtraction."<<endl;
        cout<<"3.Multiplication."<<endl;
        cout<<"4.Division."<<endl;
        cout<<"5. Exit"<<endl;

        cout<<endl<<"select calculation method:"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1 :
            res.result();
            res.sum();
            break;
        case 2 :
            res.result();
            res.sub();
            break;
        case 3 :
            res.result();
            res.mul();
            break;
        case 4 :
            res.result();
            res.div();
            break;
        case 5:
            cout<<"\nExit from calculator...\n";
        default:
            cout<<"\nInvalid choice, select from Menu.\n";
            break;
        }

    }
    while(choice!=5);
}