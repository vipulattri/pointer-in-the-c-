#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int*p = &a;
    int*q = &b;
    cout<<"the addition operation using pointer is"<<**q<<endl;
    return 0;

}