/*6. Write a C++ program to implement a class called Employee that has private member variables for 
name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor*/
#include<iostream>
using namespace std;
class employee{
    private:
        string emp_name;
        int emp_id;
        double salary,Usalary;
    public:
        employee(string n, int i, double s){
            emp_name=n;
            emp_id=i;
            salary=s;
        }
        double calculateSalary(double per_Rate){
            Usalary=salary+(salary*per_Rate);
        }
        double setSalary(double r){
            cout<<endl<<"After viewing performance , modified Salary :"<<endl;
            cout<<endl<<"Employee name : "<<emp_name<<endl;
            cout<<"Employee id : "<<emp_id<<endl;
            cout<<"Employee Updated salary (Increment - "<<salary*r<<") : "<<Usalary<<endl;
        }

};
int main(){
    string emp_name;
    int emp_id;
    double salary;
    double p_rate;

    cout<<"Enter employee name: ";
    cin>>emp_name;
    cout<<"Enter employee id: ";
    cin>>emp_id;
    cout<<"Enter employee salary: ";
    cin>>salary;

    employee emp(emp_name,emp_id,salary);
    cout<<endl<<"Current salary : "<<salary<<endl;
    cout<<"Input Performance rate between 0.1 - 0.5 : ";
    cin>>p_rate;

    emp.calculateSalary(p_rate);
    emp.setSalary(p_rate);
}