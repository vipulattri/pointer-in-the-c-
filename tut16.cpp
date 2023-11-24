#include<iostream>
using namespace std;
int main()
{
    double b = 5.6666;
    void* ptr = &b;
    cout<<*(double*)ptr<<endl;
    return 0;
}
