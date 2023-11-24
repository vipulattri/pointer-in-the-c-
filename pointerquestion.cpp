#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    clearerr;
    int x = 10;
    int *ptr = &x;
    // value of x called through pointer 
    cout<<"the value called through pointer is "<<*ptr<<endl;
    return 0;
    getch();
}