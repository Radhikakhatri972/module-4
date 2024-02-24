//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor;
#include<iostream>
using namespace std;
class calculator{
    private:
    float num1,num2;
    public:
    calculator(float n1,float n2){
        num1=n1;
        num2=n2;
    }
    float sum(){
        return (num1+num2);
    }
    float sub(){
        return (num1-num2);
    }
    float mul(){
        return (num1*num2);
    }
    float div(){
        if(num1 && num2 != 0){
            return (num1/num2);
        }
        else{
            cout<<"\nError!!! 0 is not divisable."<<endl;
        }  
        
    }

};
int main(){
    float num1,num2;
    cout<<"Enter number 1 : ";
    cin>>num1;
    cout<<"Enter number 2 : ";
    cin>>num2;
    calculator cal(num1,num2);
    cout<<endl<<"Addition = "<<cal.sum()<<endl;
    cout<<"Substraction = "<<cal.sub()<<endl;
    cout<<"Multiplication = "<<cal.mul()<<endl;
    cout<<"Division = "<<cal.div()<<endl;
    
}