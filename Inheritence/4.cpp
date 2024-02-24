/*4. Write a C++ Program display Student Mark sheet using Multiple inheritance*/
#include<iostream>
using namespace std;
class A{
    public:
    int math;
    int sci;
    public:
    void sheet1(){
        cout<<"Enter marks of Math: ";
        cin>>math;
        cout<<"Enter marks of Sci: ";
        cin>>sci;
    }
};
class B{
    public:
    int phy;
    int bio;
    public:
    void sheet2(){
        cout<<"Enter marks of Phy: ";
        cin>>phy;
        cout<<"Enter marks of Bio: ";
        cin>>bio;
    }
};
class marksheet : public A , public B{
    public:
    int eng;
    int guj;
    public:
    void sheet3(){
        cout<<"Enter marks of Eng: ";
        cin>>eng;
        cout<<"Enter marks of Guj: ";
        cin>>guj;
    }
    void display(){
        cout<<endl<<"Student Marksheet are below:"<<endl;
        cout<<"Math : "<<math<<endl<<"Sci  : "<<sci<<endl;
        cout<<"Phy  : "<<phy<<endl<<"Bio  : "<<bio<<endl;
        cout<<"Eng  : "<<eng<<endl<<"Guj  : "<<guj<<endl;
    }

};
int main(){
    marksheet m;
    m.sheet1();
    m.sheet2();
    m.sheet3();
    m.display();

}