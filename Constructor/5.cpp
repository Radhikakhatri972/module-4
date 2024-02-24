/*5. Write a C++ program to create a class called Triangle that has private member variablesfor the lengths of its three sides.
Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.*/
#include<iostream>
using namespace std;
class triangle{
    private:
        int side1,side2,side3;
    public:
        triangle(int s1,int s2,int s3){
            side1=s1;
            side2=s2;
            side3=s3;
        }
        void determinetype(){
            if(side1==side2 && side2==side3){
                cout<<endl<<"Equilateral Triangle"<<endl;
            }
            else if(side1==side2 || side2==side3 || side1==side3){
                cout<<endl<<"Isosceles Triangle"<<endl;
            }
            else{
                cout<<endl<<"Scalene Triangle"<<endl;
            }
        }
};
int main(){
    int side1,side2,side3;
    cout<<"Enter side 1: ";
    cin>>side1;
    cout<<"Enter side 2: ";
    cin>>side2;
    cout<<"Enter side 3: ";
    cin>>side3;

    triangle tr(side1,side2,side3);
    tr.determinetype();
}