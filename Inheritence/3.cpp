/*3. Create a class person having members name and age. Derive a class student having member percentage.
Derive another class teacher having member salary.Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    public:
    void infoP(string n,int a){
        cout<<endl<<"Name :"<<n<<endl;
        cout<<"Enter age : "<<a<<endl;
    }
};
class student{
    public:
    float percentage;
    public:
    void infoS(float p){
        cout<<"Percentage : "<<p<<"%"<<endl;
     }
};
class teacher:public student,public person{
    public:
    int salary;
    public:
    void infoT(int s){
        cout<<"Salary : "<<s<<endl;
    }
};
int main(){
    string name;
    int age;
    float percentage;
    int salary;

        cout<<"Enter the Name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Enter percentage : ";
        cin>>percentage;
        cout<<"Enter salary : ";
        cin>>salary;

    cout<<"Details are below:"<<endl;
    teacher t;
    t.infoP(name,age);
    t.infoS(percentage);
    t.infoT(salary);
}
        