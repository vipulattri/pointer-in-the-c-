#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string name = "hello";
    void* ptr = &name;
    cout<<"the value is  "<<*(string*)ptr<<endl;
    return 0;

}