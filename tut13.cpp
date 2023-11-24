#include<iostream>
using namespace std;
int main()
{
    float a = 3.143;
    void *ptr = &a;
    cout<<*(float*)ptr<<endl;
    return 0;
}