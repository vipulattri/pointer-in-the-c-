#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr =&a;
    cout<<"the address of the a is"<<&a<<endl;
    // -----> the address is called by '&' ampresand symbol
    // value called through pointer
    cout<<"the value of a  called through pointer is"<<*ptr<<endl;
return 0;

}