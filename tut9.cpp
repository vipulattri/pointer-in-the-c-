#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;
    cout<<"enter the value"<<endl;
    cin>>*ptr;
    cout<<"value is"<<*ptr<<endl;
    delete ptr;
    return 0;

}