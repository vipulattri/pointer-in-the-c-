#include<iostream>
using namespace std;
int main()
{
 float a = 4.4;

 void* ptr = &a;
 cout<<"the value is "<<*(float*)ptr<<endl;
 return 0;
}