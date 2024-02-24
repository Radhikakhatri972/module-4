//2. Define a class to represent a bank account.
#include<iostream>
using namespace std;
class bank_account{
    public:
    string name_borr , acc_type;
    int acc_num , bal , amt , curr_bal;
    public:
    int assignValue(){
        cout<<"Enter some detils below:"<<endl;
        cout<<"Borrower Name : ";
        getline(cin, name_borr);
        cout<<"Account type : ";
        cin>>acc_type;
    }
    int deposition(){
        cout<<endl<<"Enter Deposit amount : ";
        cin>>amt;
        cout<<endl<<"Borrower Name : "<<name_borr<<endl<<"Current Balance : "<<amt<<endl;
    }
    int checkBalance(){
        curr_bal=50000; //default balance set by me 
        cout<<endl<<"Your current balance is : "<<curr_bal<<endl;
    }
    int withdrawal(){
        cout<<endl<<"Enter withdrawal amount : ";
        cin>>amt;
        cout<<endl<<"Borrower Name : "<<name_borr<<endl<<"Current Balance : "<<curr_bal-amt<<endl;
    }
   
};
int main(){
    bank_account cm;
    cm.assignValue();
    int choice;

    cout<<endl<<"1.deposition.";
    cout<<endl<<"2.withdrawal."<<endl;
    cout<<endl<<"Select transaction type:"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1 :
        cm.deposition();
        break;
    case 2 :
        cm.checkBalance();
        cm.withdrawal();
        break;
    
    default:
        cout<<"\nInvalid choice, select from option.\n";
        break;
    }
}