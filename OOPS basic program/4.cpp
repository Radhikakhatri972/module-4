//4. Write a C++ program to implement a class called Circle that has private member variables for radius. 
//Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
const double pi=3.14159;
class circle{
    private:
    double radius,carea;
    public:
    double area(double r){
        radius=r;
        carea=pi*(r*r);
        cout<<"Area of circle : "<<carea<<endl;
    }
    double areacircumference(double r){
        radius=r;
        carea=2*(pi*r);
        cout<<"Area of circumference : "<<carea<<endl;
    }
};
int main(){
    circle a;
    a.area(5.2);
    a.areacircumference(5.2);
}