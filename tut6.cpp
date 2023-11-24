// program for function pointer
#include<iostream>
using namespace std;
int add(int a, int b)
{ return a+b; }
int main()
{
    int (*ptr) (int , int);
    ptr = add;
    int ad = ptr(4,6);
    cout<<ad<<endl;
    return 0;
}