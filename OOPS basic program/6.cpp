/*6. Write a C++ program to create a class called Person that has private member variables for name, age and country. 
Implement member functions to set and get the values of these variables.*/
#include<iostream>
using namespace std;
class person{
    string name,country;
    int age;
    public:
    int setName(string n){
        name=n;
    }
    int setAge(int a){
        age=a;
    }
    int setCountry(string c){
        country=c;
    }
    int getdetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Country : "<<country<<endl;
    }
};
int main(){
    person p;
    p.setName("radhika");
    p.setAge(23);
    p.setCountry("india");
    p.getdetails();
}