#include<iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;
    public:
    void getdata()
    {
        cout<<"enter the real part"<<endl;
        cin>>real;
        cout<<"enter the imaginary part"<<endl;
        cin>>imaginary;
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is"<<imaginary<<endl;

    }
    void setdata()
    {
        int a = real;
        int b = imaginary;
        cout<<"the value  is "<<a<<"+"<<b<<"i"<<endl;

    }
};
    int main() // driver code
    {
    complex c1;
    c1.getdata();
    c1.setdata();
    return 0;
    }