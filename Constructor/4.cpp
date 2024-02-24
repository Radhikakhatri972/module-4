/*4. Write a C++ program to implement a class called Bank Account that has private member variables 
for account number and balance. Include member functions to deposit and withdraw money from the account.*/
#include<iostream>
using namespace std;
class bank_account{
    private:
        int acc_num;
        float acc_bal=50000;
        float amt;
    public:
        float accdetails(){
        cout<<"Enter some detils below:"<<endl;
        cout<<"Account number : ";
        cin>>acc_num;
        cout<<"Your current Account balance : "<<acc_bal<<endl;
        }
        float deposit(float d){
            amt=d;
            cout<<endl<<"Transaction succesfull for the amount of "<<amt<<endl;
            cout<<"Current balance : "<<acc_bal+amt;
        }
        float withdraw(float w){
            amt=w;
            cout<<endl<<"Transaction succesfull for the amount of "<<amt<<endl;
            cout<<"Current balance : "<<acc_bal-amt;
        }
};
int main(){
    float amt;
    int choice;
    bank_account tr;
    tr.accdetails();
    cout<<"1.deposition."<<endl;
    cout<<"2.withdrawal."<<endl;
    cout<<"Select transaction type : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<endl<<"Enter transaction amount : ";
        cin>>amt;
        tr.deposit(amt);
        break;
    case 2:
        cout<<endl<<"Enter transaction amount : ";
        cin>>amt;
        tr.withdraw(amt);
        break;
    default:
        cout<<"\nInvalid choice, select from option.\n";
        break;
    }
}