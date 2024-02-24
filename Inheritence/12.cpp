/*12. Write a program to swap the two numbers using friend function without using third variable*/
#include<iostream>
using namespace std;
class Swap{
    private:
    int num1=10,num2=20;
    public:
    friend int forSwap(Swap);
};
int forSwap(Swap p){
    p.num1=p.num1+p.num2;
    p.num2=p.num1-p.num2;
    p.num1=p.num1-p.num2;

    cout<<"After swapping the numbers:"<<endl;
    cout<<"num1 : "<<p.num1<<endl;
    cout<<"num2 : "<<p.num2<<endl;
}
int main(){
    Swap s;
    forSwap(s);
}
