#include<iostream>
using namespace std;
int main()
{
    char a = 'a';
    void* ptr = &a;
    cout<<*(char*)ptr<<endl;
    return 0;
}