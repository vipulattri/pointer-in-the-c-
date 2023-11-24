// program for calling the single value through poitner  to pointer
#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int* b,**c,***d;
      b = &a;
      c = &b;
      d = &c;
    //assiging pointers
    cout<<*b<<endl;
    cout<<**c<<endl;
    cout<<***d<<endl;
    return 0;
}