/*13. Write a program to find the max number from given two numbers using friend function*/
#include<iostream>
using namespace std;
class Max{
    private:
    int num1=20,num2=21;
    public:
    friend int toMax(Max);
};
int toMax(Max m){
    int maxnum=0;
    if(m.num1>m.num2){
        maxnum=m.num1;
        cout<<"Max number is : "<<maxnum<<endl;
    }
    else if(m.num1==m.num2){
        cout<<"Both numbers are same."<<endl;
    }
    else{
        maxnum=m.num2;
        cout<<"Max number is : "<<maxnum<<endl;
    }
    
}
int main(){
    Max n;
    toMax(n);
}