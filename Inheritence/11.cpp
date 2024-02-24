/*11. Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */
#include <iostream>
using namespace std;
const float pi = 3.14;

class AreaCalculator {
public:
    float area(float n, float b, float h) {
        return n * b * h; // Area of triangle
    }

    float area(float r) {
        return pi * r * r; // Area of circle
    }

    float area(float l, float b) {
        return l * b; // Area of rectangle
    }
};
int main() {
    AreaCalculator calc;
    float b, h, r, l;

    cout<<"Enter the Base & Height of Triangle: ";
    cin>>b>>h;
    cout<<"Area of Triangle:"<<calc.area(0.5, b, h)<<endl;

    cout<<"Enter the Radius of Circle: ";
    cin>>r;
    cout<<"Area of Circle: "<<calc.area(r)<< endl;

    cout<<"Enter the Length & Breadth of Rectangle: ";
    cin>>l>>b;
    cout<<"Area of Rectangle: "<<calc.area(l,b)<<endl;

    return 0;
}