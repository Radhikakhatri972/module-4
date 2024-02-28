/*6. Write a C++ Program to show access to Private Public and Protected using Inheritance*/
#include<iostream>
using namespace std;
class Base{
    private:
    int pvt = 1;
    protected:
    int prot = 2;
    public:
    int pub = 3;

    //function to access private member
    int getPVT(){
        return pvt;
    }
};
class publicDerived : public Base{
    public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }
};
int main() {
  publicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;
  return 0;
}