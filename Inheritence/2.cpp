/*2. Write a C++ Program to find Area of Rectangle using inheritance*/
#include<iostream>
using namespace std;
class shape{
    public:
    int width,height;
    public:
    void shapeR(){
        cout<<"Enter width : ";
        cin>>width;
        cout<<"Enter height : ";
        cin>>height;
    }
};
class rectangle:public shape{
    public:
    int area(){
        return(width*height);
    }
};
int main(){
    rectangle A;
    A.shapeR();
    cout<<"Area of recangle : "<<A.area()<<endl;
}