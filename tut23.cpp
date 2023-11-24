#include<iostream>
using namespace std;
int main()
// pointer-to-pointer 
{
    int a = 10;
  int *b,**c,***d;
  b = &a;
  c = &b;
  d = &c;
  cout<<"the value a called through b pointer is"<<*b<<endl;
  cout<<"the value a called through c pointer is"<<**c<<endl;
  cout<<"the value a called through d pointer is"<<***d<<endl;
  return 0;

}