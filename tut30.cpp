#include<iostream>
// program using the pointer to a member
using namespace std;
class laptop
{
    public:
    int ram;

};
int main()
{
    int laptop::*pram;
    pram= &laptop::ram;
    laptop c1;
    c1.ram = 1;
    cout<<"the ram is"<<c1.ram<<endl;
    c1.*pram = 2;
    cout<<"the ram is "<<c1.*pram<<endl;
    return 0;

    
}
// the syntax for writing the pointer to a  member is given by the 
// datatype class-name ::* poitner name;    