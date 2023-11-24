#include<iostream>
using namespace std;
class complex
{
    public:
    int real, imaginary;
     void getdata()
    {
        int real, imaginary;
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is"<<imaginary<<endl;

    }
    
    void setdata(int a, int b)
{
    a = real;
    b = imaginary;
}
   

};
int main()
{
complex c1;
complex *ptr = &c1;
(*ptr).setdata(6,6);
(*ptr).getdata();

return 0;
}