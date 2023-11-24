#include<iostream>
using namespace std;
int main()
{
    int a  = 10;
    int b = 20;
    int *p,*q;
    p = &a;
    q = &b;
    cout<<"the value of addition of a and b is"<<*p+*q<<endl;
    return 0;
}