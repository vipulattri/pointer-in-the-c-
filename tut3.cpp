// pointer arithmetic in the c++
#include<iostream>
using namespace std;
int main()
{
    // this is a program of pointer arithmetic
    int a = 3;
    int arr[a] = {55,66,77,88};
    int *ptr = arr;
    cout<<"program for pointer arithmetic"<<endl;
    for(int i = 0; i<=a; i++)
    {
        cout<<" the value of "<<i<<"is "<<*(ptr+i)<<endl;
    }
    return 0;
}