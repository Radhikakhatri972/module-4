/*8. Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division 
Of two number using different parameters and Function Overloading*/
#include<iostream>
using namespace std;
int calc(int a,int b,int c){
    int res=a+b+c;
    cout<<"Addition: "<<res<<endl;
}
int calc(double a,double b){
    double res=a-b;
    cout<<"Subtraction: "<<res<<endl;
}
int calc(int a,double b){
    double res=a*b;
    cout<<"Multiplication: "<<res<<endl;
}
int calc(int a,int b){
    int res=a/b;
    cout<<"Division: "<<res<<endl;
}
int main(){
    calc(2,2,2);
    calc(10.5,5.5);
    calc(2,3.5);
    calc(6,2);
}
