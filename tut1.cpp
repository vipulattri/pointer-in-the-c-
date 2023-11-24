// pointer tutorials in the c++
// what is a pointer ?
// a pointer is a derived data type and it is most commonly used  
//in the c++ is used to store the address of the another values . it hold the address 
// of the other values . it is dentoted by the asterik symbol (*). 
// here asterik is a dereference operator
// a derefernce operator is a special type of the operator in the c++
// which give the value stores at the address of the variable
//the basic syntax for declaring
// the poitner is 
// data-type *variable-name;
// a simple program for declaring the pointer 
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr ;
    ptr = &a;
    cout<<"the address of the variable a is"<<ptr<<endl;
    return 0;
    // here & is the refrencing operator
    // * is a derefrencing operaotr
    // end of the main function 
    
}