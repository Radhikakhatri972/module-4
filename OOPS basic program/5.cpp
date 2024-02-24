/*5. Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
Implement member functions to calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;
class rectangle{
    int length,width;
    public:
    int area(int l,int w){
        length=l;
        width=w;
        cout<<"Area of rectangle : "<<l*w<<endl;
    }
    int perimeter(int l,int w){
        length=l;
        width=w;
        cout<<"Area of rectangle : "<<2*(l+w)<<endl;
    }
};
int main(){
    rectangle a;
    a.area(4,7);
    a.perimeter(4,7);
}