#include<iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;
    public:
    void getdata()
    {
        cout<<"enter the real value"<<endl;
        cin>>real;
        cout<<"enter the imaginary  value"<<endl;
        cin>>imaginary;
        cout<<"the real part is"<<real<<endl;
        cout<<"the imaginary value is "<<imaginary<<endl;

    }
    
};
int main()
{
 complex c1;
 complex*ptr = &c1;
 (*ptr).getdata();
 return 0;


}