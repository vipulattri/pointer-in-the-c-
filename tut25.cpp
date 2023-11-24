#include<iostream>
using namespace std;
// pointer to a function
int add(int a , int b)
{
    return a+b;
}
int main()
{
    int (*ptr) (int , int );
    ptr = add;
    int ad;
    ad = ptr(4,5);
    cout<<"the value is"<<ad<<endl;
    return 0;
    
}
