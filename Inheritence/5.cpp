/*5. Assume that the test results of a batch of students are stored in three different classes.
Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the 
total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. 
(Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class student{
    public:
    int rollNumber;
    public:
    void studentInfo(){
        cout<<"Enter roll number : ";
        cin>>rollNumber;
    }
};
class test:public student{
    public:
    int math;
    int sci;
    public:
    void testInfo(){
        cout<<"Enter Math marks : ";
        cin>>math;
        cout<<"Enter Sci marks : ";
        cin>>sci;
    }
};
class result:public test{
    public:
    int totalMarks;
    public:
    void calculateMarks(){
        totalMarks= math + sci;
        }
    
    void resultInfo(){
        cout<<endl<<"Roll no : "<<rollNumber<<endl;
        cout<<"Total marks : "<<totalMarks;
    }
};
int main(){
    result r;
    r.studentInfo();
    r.testInfo();
    r.calculateMarks();
    r.resultInfo();
}