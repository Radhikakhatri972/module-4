/*8. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
Include member functions to calculate the grade, based on the marks and display the student's information. 
Accept address from each student implement using of aggregation*/
#include<iostream>
using namespace std;
class student{
    private:
        string name;
        char Class;
        int rollNo;
        int marks;
    public:
        student(string n,char c,int r,int m){
            name=n;
            Class=c;
            rollNo=r;
            marks=m;
        }
        string calculateGrade(){
            if(marks >=90){
                return "A+";
            }
            if(marks>=80){
                return "A";
            }
            if(marks>=70){
                return "B";
            }
            if(marks>=60){
                return "C";
            }
            else{
                return "D";
            }
        }
        void displayInfo(){
            cout<<"\nStudents Details with Grade."<<endl<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Class: "<<Class<<endl;
            cout<<"Roll no.: "<<rollNo<<endl;
            cout<<"Marks: "<<marks<<endl;
            cout<<"Grade: "<<calculateGrade()<<endl;
        }

};
int main(){
    string name;
    char Class;
    int rollNo;
    int marks;

    cout<<"Enter student details below:"<<endl;
    cout<<"Name: ";
    getline(cin, name);
    cout<<"Class: ";
    cin>>Class;
    cout<<"Roll no.: ";
    cin>>rollNo;
    cout<<"Marks: ";
    cin>>marks;

    student st(name,Class,rollNo,marks);
    st.calculateGrade();
    st.displayInfo();

}