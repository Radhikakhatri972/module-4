/*1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. 
Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;    
    int age;

    void getdata(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }
};
class batsman : public cricketer{
    public:
    int run, match, avRun;
    void setData(){
        cout<<"Enter total runs: ";
        cin>>run;
        cout<<"Enter total matches: ";
        cin>>match;

        avRun = run / match;

        cout<<endl<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Total runs: "<<run<<endl;
        cout<<"Total matches: "<<avRun<<endl;
        cout<<"Average runs: "<<avRun<<endl;

        if(avRun>=80){
            cout<<"Best Player."<<endl;
        }
        else if(avRun>=40){
            cout<<"Average Player."<<endl;
        }
        else{
            cout<<"Bad Player."<<endl;
        }
    }
};
int main(){
    batsman b;
    b.getdata();
    b.setData();
    return 0;
}