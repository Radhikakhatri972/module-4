/*3. Write a C++ program to create a class called Car that has private member variables 
for company, model, and year. Implement member functions to get and set these variables*/
#include<iostream>
using namespace std;
class car{
    private:
        string model,company;
        int year;
    public:
        string getmodel(string m){
            model=m;
            setmodel();
        }
        string getcompany(string c){
            company=c;
            setcompany();
        }
        int getyear(int y){
            year=y;
            setyear();
        }
        string setcompany(){
            cout<<endl;
            cout<<"Company name : "<<company<<endl;
        }
        string setmodel(){
            cout<<"Model : "<<model<<endl;
        }
        int setyear(){
            cout<<"Year : "<<year<<endl;
        }
    };
int main(){
    string company,model;
    int year;
    cout<<"Enter company name : ";
    cin>>company;
    cout<<"Enter car model : ";
    cin>>model;
    cout<<"Enter Year : ";
    cin>>year;
    
    car cr;
    cr.getcompany(company);
    cr.getmodel(model);
    cr.getyear(year);
}