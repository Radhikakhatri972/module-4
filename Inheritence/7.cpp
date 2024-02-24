/*7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance*/
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"This is class A construtor."<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"This is class B construtor."<<endl;
    }
};
class C:public B{
    public:
    C(){
        cout<<"This is class C construtor."<<endl;
    }
};
int main(){
    C obj;
}