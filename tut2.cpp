// program on how to access a value of a varible throug its pointer
#include<iostream>
using namespace std;
int main()
{
    int a = 20;
    int *ptr;
    ptr = &a;
    cout<<"the value of a variable called through pointer is "<<*ptr<<endl;
    return 0;
}
