#include<iostream>
using namespace std;
int main()
{
    // pointer arithmetic
    int a = 6;
    int arr[a]= { 22,44,55,66,77,54};
    cout<<"the values are"<<endl;
    int *ptr = arr;
    for(int i = 0; i<=5;i++)
{
    cout<<"the value of "<<i<<"is"<<*(ptr+i)<<endl;

}
return 0;

}