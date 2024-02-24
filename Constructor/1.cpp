//1. Write a program to find the multiplication values and the cubic values using inline function;
#include<iostream>
using namespace std;
inline int mul(int num1,int num2){return(num1*num2);}
inline int cube(int num1){return(num1*num1*num1);}
int main(){
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Multipliction : "<<mul(num1,num2)<<endl;
    cout<<"cube : "<<cube(num1)<<endl;

}